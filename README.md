# Blinkprogram med NodeMCU

## Översikt
Programmet får lampan på NodeMCU att blinka fem gånger. Sedan väntar det två sekunder och börjar om.

## Mikroprocessor
Vi använder NodeMCU med ESP8266. Kortet programmeras med Arduino IDE.

## Två grundfunktioner i Arduino
- `setup()` körs en gång när kortet startar. Här ställer vi in lampan.
- `loop()` körs om och om igen. Här finns programmet som upprepas.

## Ställa in lampan
Vi använder `pinMode()` för att ställa in lampan som en utgång:

`pinMode(LED_BUILTIN, OUTPUT);`

## Kod med förklaringar

```cpp
int i = 5;
int myDelay = 50;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  while (i > 0) {
    digitalWrite(LED_BUILTIN, LOW);
    delay(myDelay);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(myDelay);
    i--;
  }

  delay(2000);
  i = 5;
}
```

- `i = 5` betyder att blinkningen ska upprepas fem gånger.
- `myDelay = 50` bestämmer hur länge lampan väntar mellan tändning och släckning.
- `digitalWrite()` tänder eller släcker lampan.
- `delay()` gör en paus. `delay(2000)` är två sekunder.
- `i = 5` börjar om med fem blinkningar.

## camelCase
camelCase betyder att ord skrivs ihop utan mellanslag och att ett nytt ord börjar med stor bokstav, till exempel `myDelay`.
