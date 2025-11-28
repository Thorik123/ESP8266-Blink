#include <Arduino.h>
#line 1 "D:\\MY PROJECT\\Latihan GIT\\ESP8266-Blink\\ESP8266-Blink.ino"

const int LED_PIN = 2;

#line 4 "D:\\MY PROJECT\\Latihan GIT\\ESP8266-Blink\\ESP8266-Blink.ino"
void setup();
#line 9 "D:\\MY PROJECT\\Latihan GIT\\ESP8266-Blink\\ESP8266-Blink.ino"
void loop();
#line 4 "D:\\MY PROJECT\\Latihan GIT\\ESP8266-Blink\\ESP8266-Blink.ino"
void setup()
{
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
    delay(500);
}

