void setup() {
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    Serial.println("status LED: hidup");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    Serial.println("status LED: mati");
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}