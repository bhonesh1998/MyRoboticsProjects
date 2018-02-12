const int rb1 =8;
const int rf2 =9;
const int lf =10;
const int lb =11;
#define ls analogRead(0)
#define rs analogRead(4)
#define LOW 0
#define HIGH 1
void setup() {
  Serial.begin(9600);
   pinMode(lf,OUTPUT);
 pinMode(lb,OUTPUT);
 pinMode(rb1,OUTPUT); 
 pinMode(rf2,OUTPUT); 
}
void loop() {
  {
analogWrite(lf,255);
analogWrite(lb,0);
analogWrite(rb1,0);
analogWrite(rf2,255);
}
}
