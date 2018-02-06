#define VERT 6
#define ORANGE 5
#define ROUGE 4
#define BOUTON 3

void setup() {
  // put your setup code here, to run once:
  pinMode(BOUTON, INPUT);

  pinMode(ROUGE, OUTPUT);
  digitalWrite(ROUGE, 0);

  pinMode(ORANGE, OUTPUT);
  digitalWrite(ORANGE, 0);

  pinMode(VERT, OUTPUT);
  digitalWrite(VERT, 1);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(BOUTON) == 1)
  {
    digitalWrite(VERT, 0);
    digitalWrite(ORANGE, 1);
    delay(5000);
    digitalWrite(ORANGE, 0);
    digitalWrite(ROUGE, 1);
    delay(20000);
    digitalWrite(ROUGE, 0);
    digitalWrite(VERT, 1);
  }
}
