#define BOUTON 6
#define moteur 7

const int vitesseMoteur[4] = {0, 85, 170, 255};
int  indice = 0;
int etatCapteur = 0;


void setup() {
  pinMode(BOUTON, OUTPUT);
  digitalWrite(BOUTON, LOW);

  Serial.begin(9600);





}

void loop() {


  if (digitalRead(BOUTON) != etatCapteur) {
    etatCapteur = digitalRead(BOUTON);
    Serial.println("bouton nouvel etat");

    if (etatCapteur == 1) {
      indice++;

      if (indice == 4) {
        indice = 0;
        analogWrite(moteur, vitesseMoteur[indice]);




      }



    }






  }
  }
