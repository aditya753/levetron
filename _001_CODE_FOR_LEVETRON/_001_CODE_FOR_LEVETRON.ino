int x=0;
void setup(){
  pinMode(A0,INPUT);
  Serial.begin(9600);
  pinMode(4,OUTPUT);
  pinMode(13,OUTPUT);
  
}
void loop(){
int x=analogRead(A0);
Serial.println(x);
delay(6);
digitalWrite(13,HIGH);
if(x<100)
digitalWrite(4,HIGH);
delay(10);
digitalWrite(13,HIGH);

if(x>100);
digitalWrite(4,LOW);
}


