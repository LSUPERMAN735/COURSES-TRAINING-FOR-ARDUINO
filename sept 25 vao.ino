//#define R1 A0
//#define R2



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
uint32_t VA0 = analogRead(A0);
Serial.println((1000*VA0)/(1023-VA0));
//Serial.println(analogRead(A0));
//Serial.println(1000*(1023-analogRead(VA0))-1);
//Serial.println(1000*(1023-(512)/512));
delay (100);
}
//1000*(1023-735)/735
