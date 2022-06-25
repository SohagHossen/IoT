int led =9;
int birghtness=0;
int fadevalue = 5;


void setup() {
  pinMode(led,OUTPUT);
}

void loop() {

 analogWrite(led,birghtness);
  
 birghtness=birghtness + fadevalue;
 if (birghtness== 0 || birghtness == 255){
  fadevalue =- fadevalue;
 }
 delay(250);
}
