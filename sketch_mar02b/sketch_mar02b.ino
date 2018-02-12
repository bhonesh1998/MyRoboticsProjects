  #define rb 8
#define rf 9
#define lf 11
#define lb 10
#define l1 digitalRead(A0)
#define l2 digitalRead(A1)
#define m digitalRead(A2)
#define r1 digitalRead(A3)
#define r2 digitalRead(A4)

void setup() 
{
 pinMode(lf,OUTPUT);
 pinMode(lb,OUTPUT);
 pinMode(rb,OUTPUT); 
 pinMode(rf,OUTPUT);  

}

void loop()
{ void forward();
  void backward();
  void left();
  void right();
  void STOP();

   if(m==0&&l2==1&&l1==1)
    {
      forward();
    }
   else if(l2==0&&m==0&&l1==1)
    {
      left();
    }
    else if(l1==0&&m==0&&l2==1)
    {
      right();
    
    }
    
  

  
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
digitalWrite(rb,1);
digitalWrite(rf,0);
}
void right()
{
  digitalWrite(lf,1);
digitalWrite(lb,0);
digitalWrite(rb,1);
digitalWrite(rf,0);
}
void left()
{
  digitalWrite(lf,0);
digitalWrite(lb,1);
digitalWrite(rb,0);
digitalWrite(rf,1);
}
 void STOP(){
 digitalWrite(lf,0);
digitalWrite(lb,0);
digitalWrite(rb,0);
digitalWrite(rf,0);}
