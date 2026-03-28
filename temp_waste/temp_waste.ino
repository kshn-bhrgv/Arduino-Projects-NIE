
 //LED arduino android when multiple rbg value was sent
 
 /*while(mySerial.available()>0){
      command=mySerial.read();
      string+=command;
    }
    l=string.lastIndexOf(':');
    h=string.lastIndexOf('-');
    rString=string.substring(h-6,h-4);
    gString=string.substring(h-4,h-2);
    bString=string.substring(h-2,h);
    numString=string.substring(h+1,l);

  rString.toCharArray(r,3);
  red=(int)strtol(r, NULL, 16);

  gString.toCharArray(g,3);
  green=(int)strtol(g, NULL, 16);


  bString.toCharArray(b,3);
  blue=(int)strtol(b, NULL, 16);

   number=numString.toInt();
   Serial.println("\n\n\n\n\nLast:");
   Serial.println(l);
    Serial.println(numString);
    Serial.print("RED:");
    Serial.println(red);
    Serial.print("BLUE:");
    Serial.println(blue);
    Serial.print("GREEN:");
    Serial.println(green);
    Serial.print("LED NUMBER:");
    Serial.println(number);
    }
    */
