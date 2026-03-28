
int a=7;
int b=8;
int c=9;
int d=11;
int pot=A0;
int pot1=A1;
int EN1=3;
int EN2=5;
int i;
int j;
int k;
int C;
int arr[20];
int ass[25];
void setup() 
{

  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(pot,INPUT);
  pinMode(EN1,OUTPUT);
  pinMode(EN1,OUTPUT);
  pinMode(pot1,INPUT);
}

void loop() 
{
  for(i=0;i<1023;i++)
  {  
    int A=analogRead(pot);
    arr[i]=A;
    int B=analogRead(pot1);
    ass[i]=B;
    delay(20);
    if(A>0&&B<=0)
    { 
      j=i+1;
      if(arr[j]>arr[i])
      {
      analogWrite(EN1,255);
      analogWrite(EN2,255);
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      }
      else
      {
        analogWrite(EN1,255);
        analogWrite(EN2,255);
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
      }
    }
    else if (A<=0&&B>0)
    {
      int k=i+1;
   if(ass[k]>ass[i])
    {
       
     C=255/(1023*arr[i]);
       analogWrite(EN1,C);
       digitalWrite(a,HIGH);
       digitalWrite(b,LOW);
       digitalWrite(c,LOW);
       digitalWrite(d,LOW);
    }  
    else  
       {
       analogWrite(EN2,C);
       digitalWrite(a,LOW);
       digitalWrite(b,LOW);
       digitalWrite(c,HIGH);
       digitalWrite(d,LOW);
    }
    }

}



        
}
                

