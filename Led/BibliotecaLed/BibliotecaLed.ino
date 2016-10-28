#include <Led.h>

Led led = Led(11);
Led led2 = Led(3);

void setup() {
  pinMode(led.getPorta, OUTPUT);
  pinMode(led2.getPorta, OUTPUT);
}

void loop() {
  led.acender();
  Delay(100);
  led.apagar();
  Delay(100);
  led.inverter();
  DELAY(100);
  led.piscar(10, 5000);
}
