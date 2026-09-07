\# Control Arcade Personalizado - iKe-GO Showdown



\## Descripción del Proyecto

Este proyecto consiste en el diseño, ensamblaje y programación de un controlador arcade físico basado en hardware libre. Permite enviar señales de entrada rápidas y precisas simulando eventos de teclado para juegos de pelea.



\## Propósito

El objetivo principal es crear una interfaz de control directa de baja latencia para evaluar la respuesta de los componentes físicos (joystick, botones y sensores) en entornos de juego real. 



Para probar y validar el funcionamiento del control se utiliza \*\*Ikemen GO\*\* (motor de juego basado en MUGEN), donde además se integran escenarios y personajes personalizados. El juego actúa como entorno de prueba para medir la precisión y velocidad de respuesta del hardware.



\## Herramientas y Materiales Utilizados

\* \*\*Hardware:

&#x20; \* Arduino Pro Micro / Leonardo (Soporte HID USB / `Keyboard.h`)

&#x20; \* Joystick analógico de 2 ejes (Ejes X / Y)

&#x20; \* Botones de pulso (SW)

&#x20; \* Sensor de choque / golpe (Shock sensor)

&#x20; \* Cableado y protoboard / placa de pruebas

\* \*\*Software:

&#x20; \* Arduino IDE (Desarrollo y carga de firmware)

&#x20; \* Ikemen GO / Engine MUGEN (Motor de prueba e integración de personajes)

&#x20; \* Git \& GitHub (Control de versiones)



\## Esquema de Conexiones

\* \*\*Eje X (Joystick): Pin A0 -> Controles de movimiento lateral (A / D)

\* \*\*Eje Y (Joystick): Pin A1 -> Controles de salto / agacharse (W / S)

\* \*\*Botón Joystick (SW): Pin Digital 3 -> Acción de botón (X)

\* \*\*Sensor de Golpe: Pin Digital 9 -> Acción especial / Ataque por choque (Z)

