 #include <LiquidCrystal.h>
LiquidCrystal lcd(16,17,18,20,21,22,23);


int pinPot=0; //variable pour le pin où est connecté le potentiomètre
int valPot=0; //variable pour récupérer la valeur lue. On l'initialise à 0.


void setup (){


DDRB = 0xff;
PORTB = 0b11111111;
  
  lcd.begin(16,2); 
lcd.clear();
lcd.print("test");

}
void loop(){  

  valPot=analogRead(A5); //lit la valeur, la transforme et la stocke dans la variable
  int attente=200;
  if (valPot>=0 && valPot<=204){
    attente=100;
  }
  if (valPot>=205 && valPot<=408){
    attente=125;
  }
  if (valPot>=409 && valPot<=613){
    attente=167;
  }
  if (valPot>=614 && valPot<=818){
    attente=250;
  }
  if (valPot>=818 && valPot<=1023){
    attente=500;
  }
//
  delay(attente);  

  lcd.setCursor(0,0);
  lcd.print("            ");  
  lcd.setCursor(0,0);
  lcd.print(valPot);




}
