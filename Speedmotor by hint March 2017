#define BOUTON 7
#define MOTEUR 6

const int vitesseMoteur[4] = {0, 85, 170, 255};
int  indice = 0;
int etatCapteur = 0;//bouton//


void setup() {

  pinMode(MOTEUR, OUTPUT);

  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(BOUTON) != etatCapteur) {
    etatCapteur = digitalRead(BOUTON);

    if (etatCapteur == 1) {
      indice++;
    }
    if (indice == 4) {
      indice = 0;
      analogWrite(MOTEUR, vitesseMoteur[indice]);



    }
  }
}
