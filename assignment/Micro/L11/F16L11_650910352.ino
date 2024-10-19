int kitchenLed = 2;
int livingRoomLed = 3;
int bathroomLed = 4;

void setup() {
  pinMode(kitchenLed, OUTPUT);
  pinMode(livingRoomLed, OUTPUT);
  pinMode(bathroomLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    if (command == "kitchen on") {
      digitalWrite(kitchenLed, HIGH);
    } else if (command == "kitchen off") {
      digitalWrite(kitchenLed, LOW);
    } else if (command == "livingroom on") {
      digitalWrite(livingRoomLed, HIGH);
    } else if (command == "livingroom off") {
      digitalWrite(livingRoomLed, LOW);
    } else if (command == "bathroom on") {
      digitalWrite(bathroomLed, HIGH);
    } else if (command == "bathroom off") {
      digitalWrite(bathroomLed, LOW);
    }
  }
}
