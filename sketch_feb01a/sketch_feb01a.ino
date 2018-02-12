const int rb1 =8;
const int rf2 =9;
const int lf =10;
const int lb =11;
#define LOW 0
#define HIGH 1

void setup() 
{
 pinMode(lf,OUTPUT);
 pinMode(lb,OUTPUT);
 pinMode(rb1,OUTPUT); 
 pinMode(rf2,OUTPUT); 

}

void loop()
{
   forward();
   delay(1000);
   right();
   delay(500);
   backward();
   delay(1000);
   left();
   
}
void forward()  
{
digitalWrite(lf,1);
digitalWrite(lb,0);
digitalWrite(rb1,0);
digitalWrite(rf2,1);
}
void backward()
{
  digitalWrite(lf,0);
digitalWrite(lb,1);
digitalWrite(rb1,1);
digitalWrite(rf2,0);
}
void right()
{
  digitalWrite(lf,1);
digitalWrite(lb,0);
digitalWrite(rb1,0);
digitalWrite(rf2,0);
}
void left()
{
  digitalWrite(lf,0);
digitalWrite(lb,0);
digitalWrite(rb1,0);
digitalWrite(rf2,1);
}
 void stop(){
 digitalWrite(lf,0);
digitalWrite(lb,0);
digitalWrite(rb1,0);
digitalWrite(rf2,0);}
