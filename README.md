# **Blinkprogram med NodeMCU**

## **Översikt**

Programmet får lampan att blinka flera gånger med hjälp av kod.

## **Mikroprocessor**

Vi använder NodeMCU med ESP8266. ESP8266 är mikrochipet på kortet som kör programmet. Kortet programmeras med Arduino IDE och har inbyggt Wi-Fi.

## **Två grundfunktioner i Arduino**

- `setup()` körs en gång bär kortet startar. Här gör vi de inställningar som behövs.
- `loop()` kör programmet om och om igen så länge kortet är igång.
## **Portinitialisering**

Vi använder `pinMode()` för att ställa in lampan så at kortet kan tända och släcka den.

`LED_BUILTIN` betyder att vi använder lampan som redan finns på kortet. `OUTPUT` betyder att kortet kan styra lampan.

## **Kod med förklaringar**

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

- `i = 5` betyder att lampan ska blinka fem gånger. 
- `myDelay = 50` bestämmer hur länge lampan väntar mellan varje ändring.
- `digitalWrite()` styr om lampan ska tändas eller släckas.
- `LOW` tänder lampan och `HIGH` släcker den på vår NodeMCU.
- `delay()` gör en paus. `delay(2000)` är två sekunder.


## **camelCase**

camelCase betyder att ord skrivs ihop utan mellanslag och att ett nytt ord börjar med stor bokstav, till exempel `myDelay`.Avslutning


Genom den här uppgiften har jag lärt mig hur man kan använda kod för att styra en lampa på ett mikroprocessorkort. Jag har också fått lära mig mer om variabler, loopar, funktioner och hur man använder olika kommandon i Arduino.

Det viktigaste jag har förstått är hur programmet kan upprepa samma instruktioner flera gånger utan att vi behöver skriva samma kod flera gånger.
