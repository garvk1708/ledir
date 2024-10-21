#define IR_LED_PIN D1
#define SENSOR_PIN A0

void setup() {
  pinMode(IR_LED_PIN, OUTPUT);
  digitalWrite(IR_LED_PIN, LOW);
  Serial.begin(115200);
}

void loop() {
  digitalWrite(IR_LED_PIN, HIGH);
  
  int sensorValue = analogRead(SENSOR_PIN);
  Serial.print("IR Sensor Value: ");
  Serial.println(sensorValue);
  
  if(sensorValue > 700) {
    Serial.println("IR detected!");
  } else {
    Serial.println("No IR detected.");
  }

  digitalWrite(IR_LED_PIN, LOW);
  delay(500); 
}
