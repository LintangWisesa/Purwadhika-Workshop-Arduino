void setup() {
    Serial.begin(9600);
    pinMode(6, OUTPUT);
}

void loop() {
    Serial.println("status LED: hidup");
    digitalWrite(6, HIGH);
    delay(1000);
    Serial.println("status LED: mati");
    digitalWrite(6, LOW);
    delay(1000);
}