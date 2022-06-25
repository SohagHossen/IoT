byte a,b,c,bo,d,e,f;
void setup() {
  pinMode(13,INPUT);//a
  pinMode(12,INPUT);//b
  pinMode(4,OUTPUT);
  pinMode(1,OUTPUT);
}

void loop() { 
  a=digitalRead(13);
  b=digitalRead(12);
  e=!a;
  f=!b;
  
 digitalWrite(4,a^b);
 digitalWrite(1,a&b);
 
  
 
  
}
