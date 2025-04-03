#define RED_PIN 8
#define YELLOW_PIN 7
#define GREEN_PIN 6

void setup() {
  // put your setup code here, to run once:

  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() > 0) {
    char command = Serial.read();
    if (command == '0') {
      digitalWrite(RED_PIN, HIGH);
    } 
    if (command == '1') {
      
      digitalWrite(YELLOW_PIN, HIGH);
    }

    if (command == '2') {
      
      digitalWrite(GREEN_PIN, HIGH);
    }
  }

}