#define BOUTON  2
#define MOTEUR  6

const int vitesseMoteur[4] = {0, 85, 170, 255};
int  indice = 0;
int etatCapteur = 0;
//int SWITCH;
void setup() {

  pinMode(BOUTON, OUTPUT);
  digitalWrite(BOUTON, LOW);
  Serial.begin(9600);


}

void loop() {

  if (digitalRead(BOUTON) != etatCapteur) {
    etatCapteur = digitalRead(BOUTON);
    Serial.println("Nouvel etat bouton");
    if (etatCapteur == 1) {
      indice++;

      if (indice == 4)
        indice = 0;
      analogWrite(MOTEUR, vitesseMoteur[indice]);

    }
    delay (200);
  }
}
