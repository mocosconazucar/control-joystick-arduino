// FIRMWARE CONTROL ARCADE - IKEMEN GO / MUGEN
#include <Keyboard.h>

// Definicion de pines
const int pinX = A0;
const int pinY = A1;
const int swPin = 3;
const int shockPin = 9;

// Control de estados anteriores
int ultimoEstadoSW = HIGH;
int ultimoEstadoShock = HIGH;

void setup() {
  pinMode(swPin, INPUT_PULLUP);
  pinMode(shockPin, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  // 1. LECTURA DEL JOYSTICK (Ejes X e Y)
  int valorX = analogRead(pinX);
  int valorY = analogRead(pinY);

  // Eje X: Izquierda (A) / Derecha (D)
  if (valorX < 300) { 
    Keyboard.press('a'); 
  } else if (valorX > 700) { 
    Keyboard.press('d'); 
  } else { 
    Keyboard.release('a'); 
    Keyboard.release('d'); 
  }

  // Eje Y: Arriba (W) / Abajo (S)
  if (valorY < 300) { 
    Keyboard.press('w'); 
  } else if (valorY > 700) { 
    Keyboard.press('s'); 
  } else { 
    Keyboard.release('w'); 
    Keyboard.release('s'); 
  }

  // 2. LECTURA DEL BOTON DEL JOYSTICK (Tecla X)
  int estadoSW = digitalRead(swPin);
  if (estadoSW == LOW && ultimoEstadoSW == HIGH) { 
    Keyboard.press('x'); 
  } else if (estadoSW == HIGH && ultimoEstadoSW == LOW) { 
    Keyboard.release('x'); 
  }
  ultimoEstadoSW = estadoSW;

  // 3. LECTURA DEL SENSOR DE GOLPE (Tecla Z)
  int estadoShock = digitalRead(shockPin);
  if (estadoShock == LOW && ultimoEstadoShock == HIGH) { 
    Keyboard.press('z'); 
  } else if (estadoShock == HIGH && ultimoEstadoShock == LOW) { 
    Keyboard.release('z'); 
  }
  ultimoEstadoShock = estadoShock;
}
