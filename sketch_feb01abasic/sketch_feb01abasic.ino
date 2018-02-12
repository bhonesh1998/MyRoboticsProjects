
#define rb1 8
#define rf2 9
#define lf 10
#define lb 11
#define ls analogRead(0)
#define rs analogRead(4)
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
{ if((ls>500)&&(rs>500))
   {
    forward();
  }
 else if(ls<500)
   {
   left();
   delay(800);
   }
 else if(rs<500)  
   {
    right();
   delay(500);
   }
   else
   forward();
  
   
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
digitalWrite(rb1,1);
digitalWrite(rf2,0);
}
void left()
{
  digitalWrite(lf,0);
digitalWrite(lb,1);
digitalWrite(rb1,0);
digitalWrite(rf2,1);
}
 void stop(){
 digitalWrite(lf,0);
digitalWrite(lb,0);
digitalWrite(rb1,0);
digitalWrite(rf2,0);}
