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
