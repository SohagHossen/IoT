byte a,b,c;
void setup() {
  pinMode(13,INPUT);
  pinMode(7,INPUT);
  pinMode(5,INPUT);
  pinMode(12,OUTPUT);
  pinMode(1,OUTPUT);
  

}

void loop() {

  a=digitalRead(13);
  
  if (a==HIGH){
    digitalWrite(12,LOW);
  }
  else 
  {
    digitalWrite(12,HIGH);
  }

  b=digitalRead(7);
  c=digitalRead(5);

  if (b==HIGH && c ==HIGH){
   
    digitalWrite(1,HIGH);
  }
  else{
     digitalWrite(1,LOW);
  }
 
}
