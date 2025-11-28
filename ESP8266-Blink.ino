
const int LED_PIN = 2;
const int BUTTON_PIN = 0;

bool enableBlink = false;

void setup()
{
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop()
{
    if (digitalRead(BUTTON_PIN) == LOW)
    {
        enableBlink = !enableBlink;
        delay(300); // Debounce delay
    }

    if (enableBlink)
    {
        digitalWrite(LED_PIN, !digitalRead(LED_PIN));
        delay(500);
    }
    else
    {
        digitalWrite(LED_PIN, LOW);
    }
}