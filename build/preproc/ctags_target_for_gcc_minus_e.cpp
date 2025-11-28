# 1 "D:\\MY PROJECT\\Latihan GIT\\ESP8266-Blink\\ESP8266-Blink.ino"

const int LED_PIN = 2;

void setup()
{
    pinMode(LED_PIN, 0x01);
}

void loop()
{
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
    delay(500);
}
