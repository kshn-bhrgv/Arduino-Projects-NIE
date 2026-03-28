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
int C;
int arr[20];
int a[
void stup() 
{

  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(pot,INPUT);
  pinMode(EN1,OUTPUT);
  pinMode(EN1,OUTPUT);
  pinMode(A1,INPUT);
}

void loop() 
{
  for(i=0;i<1023;i++)
  {
    int A=analogRead(pot);
    arr[i]=A;
  }
  for(i=0;i<1023;i++)
  {
    j=i+1;
   if(arr[j]>arr[i])
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
    for(int i=0;i<1023;i++)
    {
      int D=analogRead(pot1);
      
    }
  }  















       
    
  
  
}
