#define BP1 3 
#define BP2 4 //pullup


void setup() {

  pinMode(BP1, INPUT);
  digitalWrite(BP1,LOW);
  pinMode(BP2, INPUT);
  digitalWrite(BP2,HIGH);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  if (digitalRead(BP1) == 0) {
    Serial.println("BP1 pin 3 appuye");
  }
  if (digitalRead(BP2) == 1) {
    Serial.println("BP2 pin4 appuye");
  }
  delay(200);

  // put your main code here, to run repeatedly:

}
