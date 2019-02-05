int led=3;
int pot=A0; 
int deger; 
void setup() {
Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(pot,INPUT);
}
void loop() {
deger=analogRead(pot);
Serial.print(deger);
deger= map(deger,0,1023,0,255);
analogWrite(led,deger);
}
