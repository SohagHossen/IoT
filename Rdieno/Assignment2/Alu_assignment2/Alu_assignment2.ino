String input;
String input1;
int num1;
int num2;
int sum = 0;
int a, b, c;
void setup() {
  Serial.begin(9600);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);

}

void loop() {


  if (Serial.available()) {
    input = Serial.readStringUntil('\n');
    input1 = Serial.readStringUntil('\n');
    num1 = input.toFloat();
    num2 = input1.toFloat();

    Serial.print("Frist Input: " );
    Serial.println(num1);

    Serial.print("Second Input: " );
    Serial.println(num2);
    a = digitalRead(10);
    b = digitalRead(9);
    c = digitalRead (8);


    //function call
    // Transfer A
    if (a == 0 && b == 0 && c == 0) {
      int result = 0;
      result = TransA(num1, num2);
      Serial.print("Y=Transfer A= Result=");
      Serial.println(result);

    }
    //001 Incerment A
    if (a == 0 && b == 0 && c == 1) {
      int result;
      result = Inc(num1, num2);
      Serial.print("Y=Increment A= Result=");
      Serial.println(result);

    }


    //010 add Y=A+B
    if (a == 0 && b == 1 && c == 0) {
      int addr;
      addr = add(num1, num2);
      Serial.print("Y=A+B= Result=");
      Serial.println(addr);

    }
    //011 Add B to A plus 1
    if (a == 0 && b == 1 && c == 1) {
      int result;
      result = BtoA_1(num1, num2);
      Serial.print("Y=B to A_1 = Result=");
      Serial.println(result);

    }
    //Y= A+B not 1's complement

    if (a == 1 && b == 0 && c == 0) {
      int result;
      result = comp1s(num1, num2);
      Serial.print("Y=1's complement = Result=");
      Serial.println(result);

    }
    //A +B not +1-- 2's complements
    if (a == 1 && b == 0 && c == 1) {
      int result;
      result = comp2s(num1, num2);
      Serial.print("Y=2's complement = Result=");
      Serial.println(result);

    }
    //110 decriment A-1
    if (a == 1 && b == 1 && c == 0) {
      int dec;
      dec = DecrimentA(num1, num2);
      Serial.print("Y=A-1= Result=");
      Serial.println(dec);


    }
    //Transfer A
    if (a == 1 && b == 1 && c == 1) {
      int result = 0;
      result = TransA(num1, num2);
      Serial.print("Y=A = Result=");
      Serial.println(result);

    }

  }
}



//Transfer A
int TransA(int a , int c) {

  int result = 0;
  result = a;
  return result;
}
//Increment A+1
int Inc(int a , int c) {

  int result = 0;
  result = a + 1;
  return result;
}

//add function A+B

int  add(int a , int c) {

  int sum = a + c;
  return sum;
}
//add B to A plus 1  Y= A+ B+1

int  BtoA_1(int a , int c) {

  int result = a + c + 1;
  return result;
}
// 1's complement
int comp1s(int a , int c) {

  int result = 0;
  int z = ~c;
  result = a + z;
  return result;
}
//2's complement
int comp2s(int a , int c) {

  int result = 0;
  int z = ~c;
  result = a + z + 1;
  return result;
}
int  DecrimentA(int a , int c) {

  int DecrimentA = a - 1;
  return DecrimentA;
}
