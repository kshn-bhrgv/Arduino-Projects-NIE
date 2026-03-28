#include <SPI.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <Temboo.h>        // the temboo libraries require modification - see note above

//#include "MyCommonDefinitions.h"
// MyCommonDefinitions.h has definitions:
#define WIFI_SSID_1     "mySSID1"
#define WIFI_PASSWORD_1 "wifipassword1"
#define WIFI_SSID_2     "mySSID2"
#define WIFI_PASSWORD_2 "wifipassword2"


//#include "TembooAccount.h" // Contains Temboo account information
// TembooAccount.h has definitions:
#define TEMBOO_ACCOUNT      "dsfasdfsdf"         //  Temboo account name
#define TEMBOO_APP_KEY_NAME "myFirstApp"         //  Temboo app key name
#define TEMBOO_APP_KEY      "sdfasdfsadfasdfsf"  //  Temboo app key


WiFiClient client;

// The number of times to trigger the action if the condition is met
// We limit this so you won't use all of your Temboo calls while testing
int maxCalls = 4;
int calls = 0;  // The number of times this Choreo has been run so far in this sketch

void setup() {
  Serial.begin(115200);
  delay(4000);  // buy time for a human to open the serial window

  Serial.println("start of temboo test");

  // Try to connect to the local WiFi network
  WiFi.begin(WIFI_SSID_1, WIFI_PASSWORD_1);
  while (WiFi.status() != WL_CONNECTED) {                     // wait for the loging process to complete
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("WiFi connected - IP address of ESP8266 is:");
  Serial.println(WiFi.localIP());
  delay(3000);  // let the dust settle
}

void loop() {
  int sensorValue = (calls + 1) * 10;                  // fake a sensor reading
  Serial.println("Sensor: " + String(sensorValue));

  if (calls < maxCalls) {
    runAppendRow(sensorValue);
    calls++;
  } else {
    Serial.println("maxCalls exceeded - no further calls to temboo");
  }
  delay(4000);
}

void runAppendRow(int sensorValue) {
  Serial.println("+++++start of runAppendRow");
  TembooChoreo AppendRowChoreo(client);

  // Set Temboo account credentials
  Serial.println("set Temboo account credentials");
  AppendRowChoreo.setAccountName(TEMBOO_ACCOUNT);
  AppendRowChoreo.setAppKeyName(TEMBOO_APP_KEY_NAME);
  AppendRowChoreo.setAppKey(TEMBOO_APP_KEY);

  // Set profile to use for execution
  AppendRowChoreo.setProfile("test1");
  // Identify the Choreo to run
  Serial.println("identify the Choreo to run");
  AppendRowChoreo.setChoreo("/Library/Google/Spreadsheets/AppendRow");

  String rowData = "12-JAN-2006," + String(sensorValue) + ",this is the text";
  Serial.println("rowData =" + rowData);

  //AppendRowChoreo.addInput("RowData", "00-MMM-1922," + String(sensorValue) + ",this is the text");
  AppendRowChoreo.addInput("RowData", rowData);

  // Run the Choreo
  Serial.print("run the Choreo - return code =");
  unsigned int returnCode = AppendRowChoreo.run();
  Serial.println(returnCode);

  // A return code of zero means everything worked
  if (returnCode == 0) {
    // this commented-out code crashes the ESP8266 for some reason
    //while (AppendRowChoreo.available()) {
    //  Serial.println("read the return string");
    //  char c = AppendRowChoreo.read();
    //  Serial.print(c);
    //}
    Serial.println("close AppendRowChoreo");
    AppendRowChoreo.close();
  }
  Serial.println("-----end of runAppendRow");
}
