\# Control Arcade Personalizado - iKe-GO Showdown

\## Descripción del Proyecto

Este proyecto consiste en el diseño, ensamblaje y programación de un controlador arcade físico basado en hardware libre. Permite enviar señales de entrada rápidas y de baja latencia simulando eventos de teclado USB para juegos de pelea en tiempo real.



\## Propósito del Proyecto

El objetivo principal es crear una interfaz de control directa para evaluar la respuesta de los componentes físicos (joystick, botones y sensores) en entornos de juego.



Para probar y validar el funcionamiento del control se utiliza \*\*Ikemen GO\*\* (motor de juego de peleas basado en MUGEN), donde además se integran y modifican escenarios y personajes personalizados. El juego actúa como entorno de prueba para medir la precisión y velocidad de respuesta del hardware en combate.



\## Herramientas y Materiales Utilizados

\* \*\*Hardware:\*\*

&#x20; \* Placa de desarrollo compatible con HID (Arduino Pro Micro / Leonardo)

&#x20; \* Módulo de Joystick analógico de 2 ejes (VRx / VRy / SW)

&#x20; \* Sensor de choque / golpe (Shock sensor)

&#x20; \* Placa de pruebas (Protoboard) y cables Jumper

\* \*\*Software:\*\*

&#x20; \* Arduino IDE (Entorno de desarrollo y carga de firmware)

&#x20; \* Ikemen GO / Engine MUGEN (Motor de prueba e integración de personajes/escenarios)

&#x20; \* Git \& GitHub (Control de versiones y documentación)



\---



\## Diagrama de Circuito



!\[Diagrama de Conexiones Arduino Pro Mini y Joystick](diagrama\_conexion.jpg)



\### Mapa de Conexiones (Tabla de Pines)



| Componente | Pin del Componente | Pin en Arduino | Función en Juego / Tecla |

| :--- | :--- | :--- | :--- |

| \*\*Joystick (VRx)\*\* | Salida Analógica X | \*\*A0\*\* | Movimiento Izquierda / Derecha (`A` / `D`) |

| \*\*Joystick (VRy)\*\* | Salida Analógica Y | \*\*A1\*\* | Movimiento Arriba / Abajo (`W` / `S`) |

| \*\*Joystick (SW)\*\* | Botón de presión | \*\*Digital 3\*\* | Botón de Ataque / Selector (`X`) |

| \*\*Sensor de Golpe\*\* | Señal Digital (OUT) | \*\*Digital 9\*\* | Ataque Especial por Impacto (`Z`) |

| \*\*VCC (Todos)\*\* | Alimentación | \*\*5V\*\* | Energía positiva para sensores |

| \*\*GND (Todos)\*\* | Tierra común | \*\*GND\*\* | Masa común |



\---



\## Instrucciones de Instalación y Configuración



1\. \*\*Montaje Físico:\*\* Conectar el joystick y el sensor de golpe al Arduino respetando el esquema del diagrama y la tabla de conexiones.

2\. \*\*Carga del Firmware:\*\*

&#x20;  - Abrir el archivo `main.ino` en Arduino IDE.

&#x20;  - Seleccionar la placa \*\*Arduino Leonardo / Micro\*\* en el menú \*Herramientas\*.

&#x20;  - Compilar y subir el programa a la placa.

3\. \*\*Prueba en Ikemen GO:\*\*

&#x20;  - Conectar el controlador por USB al PC.

&#x20;  - Iniciar Ikemen GO y acceder a \*Options > Key Config\*.

&#x20;  - Mapear las teclas enviadas por el control (`W`, `A`, `S`, `D`, `X`, `Z`) a las acciones deseada de los personajes.

