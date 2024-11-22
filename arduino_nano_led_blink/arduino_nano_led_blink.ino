#define RED 22

void setup() {
    pinMode(RED, OUTPUT);
}

void loop() {
    digitalWrite(RED, LOW);
    delay(1000);
    digitalWrite(RED, HIGH);
}