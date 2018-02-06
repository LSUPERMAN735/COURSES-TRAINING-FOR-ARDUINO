#define N1 3
#define N2 4



void setup() {
  pinMode(N1,INPUT);
  pinMode(N2,INPUT);
  Serial.begin(9600);

}

void loop() {
    if (digitalRead(N1)==0){
      Serial.println ("bouton n1 appuye");   
      }
    if (digitalRead(N2)==1){
      Serial.println ("bouton n2 appuye") ;  
      }
    delay(200);
}
----------------------------------------------------------------------
  //code part b //
  int etatSwitch=0;

void setup() {
  pinMode(3, INPUT);
  digitalWrite(3, LOW);
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(3) == 1)
  {
    Serial.println("Le bouton 3 est appuye");
  }

  if (digitalRead(2) == 0)
  {
    Serial.println("Le bouton 2 est appuye");
  }

delay(200);
}
