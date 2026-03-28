String mString;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
 if(Serial.available()>0)
 {
  mString=Serial.readString();
  byte firstCommaIndex =mString.indexOf(',');
  byte secondCommaIndex =mString.indexOf(',',firstCommaIndex+1);
  byte thirdCommaIndex =mString.indexOf(',',secondCommaIndex+1);
  
  String r=mString.substring(0,firstCommaIndex);
  String g=mString.substring(firstCommaIndex+1,secondCommaIndex);
  String b=mString.substring(secondCommaIndex+1,thirdCommaIndex);
  String n=mString.substring(thirdCommaIndex+1);

  int red=r.toInt();
  int green=g.toInt();
  int blue=b.toInt();
  int N=n.toInt();

  Serial.println(red);
  Serial.println(green);
  Serial.println(blue);
  Serial.println(N);
  Serial.println();
  Serial.println();
  Serial.println();
 }

}
