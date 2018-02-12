
#define rb 10
#define rf 11
#define lf 9
#define lb 8
#define LOW 0
#define HIGH 1

void setup() 
{
 pinMode(lf,OUTPUT);
 pinMode(lb,OUTPUT);
 pinMode(rb,OUTPUT); 
 pinMode(rf,OUTPUT); 

}

void loop()
{ 
    
 void STOP();
 void forward();  
 void right();
 void left();  
  forward();
  /*delay(5000);
  right();
  delay(2190);
  forward();
  delay(5000);
  left();
  delay(2190);
  forward();
  delay(5000);
  backward();
  delay(2400);
  */
}
void forward()  
{
digitalWrite(lf,1);
digitalWrite(lb,0);
digitalWrite(rb,0);
digitalWrite(rf,1);
}
void backward()
{
  digitalWrite(lf,0);
digitalWrite(lb,1);
digitalWrite(rb,0);
digitalWrite(rf,1);
}
void right()
{
  digitalWrite(lf,1);
digitalWrite(lb,0);
digitalWrite(rb,0);
digitalWrite(rf,0);
}
void left()
{
  digitalWrite(lf,0);
digitalWrite(lb,0);
digitalWrite(rb,0);
digitalWrite(rf,1);
}
 void STOP()
 {
digitalWrite(lf,0);
digitalWrite(lb,0);
digitalWrite(rb,0);
digitalWrite(rf,0);
}
