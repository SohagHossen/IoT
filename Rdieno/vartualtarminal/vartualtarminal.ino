int a = 202;
int b;
char shuhag='S';
char shuhan[] = "Hello World";
double s1 =555.11;
float s2 = 8.7;
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
}

void loop() {
   Serial.print("a");
   Serial.println(shuhag);
   Serial.println(shuhag);
   Serial.println(s1);
   Serial.println(s2);
   Serial.println();
   Serial.println();
   Serial.println(a,HEX);
   Serial.println(a,OCT);
   Serial.println(a,BIN);
   Serial.println();
   
   Serial.print("DEC");
   Serial.print("    ");

   Serial.print("BIN");
   Serial.print("     ");
   Serial.println();
  Serial.write(b);
  Serial.println(b);
 

  for(int i=0; i<10; i++){
    Serial.print(i,DEC);
    Serial.print("   ");

    Serial.print(i,BIN);
    Serial.print("   ");
    Serial.println();
    delay(1200);
  }
   
}
