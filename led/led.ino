int a=10;
int C=A0;
int arr[20];
int j;
float D;

void setup() {
  pinMode(a,OUTPUT);
  pinMode(C,INPUT);
//serial.begin(9600);
}

void loop() {
  int A=analogRead(C);
  delay(10);
  for(int i=0;i<1023;i++)
  {
    arr[i]=A;
    delay(10);
  }
for(int i=0;i<1023;i++)
{
  j=i+1;
  if(arr[j]>arr[i])
  {
    D=(255*arr[i])/1023;
//    serial.print(D);
    analogWrite(D,a);
  
    }
  } 
} 


