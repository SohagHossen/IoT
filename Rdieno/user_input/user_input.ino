
int f = 5;
int g = 6;
int e = 7;
int d = 8;
int c = 9;
int b = 11;
int a = 12;  //7 Segment pin

int buttonPin=13;
int buttonState=0;
int state=0;


void setup() {

  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(buttonPin,INPUT);

}

void loop() 
{
 buttonState=digitalRead(buttonPin);
 if (buttonState == HIGH){
 state = random(1,7); // take random values from 1 to 6
 switch(state){
 
 case 1:
 digitalWrite(a,1); 
 digitalWrite(b,0);  
 digitalWrite(c,0);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,1);   // 1
 
 break;
 
 case 2:  
 digitalWrite(a,0); 
 digitalWrite(b,0);  
 digitalWrite(c,1);  
 digitalWrite(d,0);  
 digitalWrite(e,0);  
 digitalWrite(f,1);  
 digitalWrite(g,0);   // 2

 break;
 
 case 3:
 digitalWrite(a,0); 
 digitalWrite(b,0);  
 digitalWrite(c,0);  
 digitalWrite(d,0);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,0);   // 3

 break;
  
case 4: 
 digitalWrite(a,1); 
 digitalWrite(b,0);  
 digitalWrite(c,0);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,0);  
 digitalWrite(g,0);   // 4
  
  break;
    
case 5:
 digitalWrite(a,0); 
 digitalWrite(b,1);  
 digitalWrite(c,0);  
 digitalWrite(d,0);  
 digitalWrite(e,1);  
 digitalWrite(f,0);  
 digitalWrite(g,0);   // 5

  break;
  
 case 6: 
 digitalWrite(a,1); 
 digitalWrite(b,1);  
 digitalWrite(c,0);  
 digitalWrite(d,0);  
 digitalWrite(e,0);  
 digitalWrite(f,0);  
 digitalWrite(g,0);   // 6

  break;
 }             
}
}
