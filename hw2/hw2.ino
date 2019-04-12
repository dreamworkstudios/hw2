int ledPin = 9;
int darknessThreshold = 200;

int sensorValue = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    sensorValue = analogRead(A0);
    Serial.print("analog sensor value: ");
    Serial.println(sensorValue);
    Serial.println(sensorValue - 30);
    if (sensorValue < darknessThreshold) {
      digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
    }
    delay(100);
}
