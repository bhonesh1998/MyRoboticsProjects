#define rb 10
#define rf 11
#define lf 9
#define lb 8
#define r2 digitalRead(A0)
#define r1 digitalRead(A1)
#define m digitalRead(A2)
#define l2 digitalRead(A3)
#define l1 digitalRead(A4)

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
  void leftstrt();
  void rightstrt();
 
if(m==0&&l1==1&&l2==1&&r2==1&&r1==1)
{
  forward();
  
}
else if(m==1&&l1==1&&l2==1&&r2==1&&r1==1)
 {
  backward();
  delay(2600);
   
 }
 else if((m==0&&l1==0&&l2==0&&r2==1&&r1==1)||(m==0&&l1==1&&l2==0&&r2==1&&r1==0)||(m==0&&l1==0&&l2==0&&r2==1&&r1==0)||(m==1&&l1==1&&l2==0&&r2==1&&r1==1)||(m==0&&r2==1&&r1==1&&l1==0&&l2==1))
 {
    //forward();
    //delay(1000);
    left();
    //delay(2190); // time takn by to turn left such that left wheel is in stop position
 }
 else if(( m==0&&l1==1&&l2==1&&r2==0&&r1==0)||(m==0&&l1==1&&l2==0&&r2==1&&r1==0)||(m==0&&l1==1&&l2==0&&r2==0&&r1==0)||(m==1&&l1==1&&l2==1&&r2==1&&r1==0)||(r1==1&&r2==0&&m==0&&l1==1&&l2==1)||(m==1&&r2==0&&r1==0&&l1==1&&l2==1)||(m==1&&r2==0&&r1==0&&l1==1&&l2==0)||(m==1&&r2==1&&r1==0&&l1==1&&l2==0))
   { 
    //forward();
    //delay(1000);
    right();
    //delay(2190); //time taken by bot to turn right()
   }
   
 else if(l2==0&&r1==1&&m==0&&r2==1&&l1==1)
   {
    leftstrt();
    
   } 
 else if(l2==1&&r1==0&&m==0&&l1==1&&r2==1)  
   {
    rightstrt();
    
    }
   //code for plus
 else if(m==0&&l1==0&&l2==0&&r2==0&&r1==0)
   {
    left();
    // time takn by to turn left such that left wheel is in stop position
   }
else 
STOP();
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
  digitalWrite(lf,1);
digitalWrite(lb,0);
digitalWrite(rb,1);
digitalWrite(rf,0);
}
void rightstrt()
{
  digitalWrite(lf,1);
digitalWrite(lb,0);
digitalWrite(rb,1);
digitalWrite(rf,0);
}
void leftstrt()
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
 void STOP(){
 digitalWrite(lf,0);
digitalWrite(lb,0);
digitalWrite(rb,0);
digitalWrite(rf,0);}
