// CONTROL ULTRA RAPIDO - SHOCK EN PIN 9
#include <Keyboard.h>

const int shockPin = 9;
const int swPin = 3;
const int pinX = A0;
const int pinY = A1;

int ultimoEstadoShock = HIGH;
int ultimoEstadoSW = HIGH;

void setup() {
  pinMode(shockPin, INPUT_PULLUP);
  pinMode(swPin, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  int estadoShock = digitalRead(shockPin);
  if (estadoShock == LOW && ultimoEstadoShock == HIGH) { Keyboard.press('z'); }
  else if (estadoShock == HIGH && ultimoEstadoShock == LOW) { Keyboard.release('z'); }
  ultimoEstadoShock = estadoShock;

  int valorX = analogRead(pinX);
  int valorY = analogRead(pinY);
  if (valorX < 300) { Keyboard.press('a'); }
  else if (valorX > 700) { Keyboard.press('d'); }
  else { Keyboard.release('a'); Keyboard.release('d'); }

  if (valorY < 300) { Keyboard.press('w'); }
  else if (valorY > 700) { Keyboard.press('s'); }
  else { Keyboard.release('w'); Keyboard.release('s'); }

  int estadoSW = digitalRead(swPin);
  if (estadoSW == LOW && ultimoEstadoSW == HIGH) { Keyboard.press('x'); }
  else if (estadoSW == HIGH && ultimoEstadoSW == LOW) { Keyboard.release('x'); }
  ultimoEstadoSW = estadoSW;
}
