#include <ESP8266WiFi.h>
#include <PubSubClient.h>

#define wifi_ssid "kshn"
#define wifi_password "melody123"

#define mqtt_server "m11.cloudmqtt.com"
#define mqtt_port 12571
#define mqtt_user "olxjxbzn"
#define mqtt_password "rT0QvmkzWZCP"

#define in_topic "/light/in"
#define out_topic "/security_system"
// Replace by 2 if you aren't enable to use Serial Monitor... Don't forget to Rewire R1 to GPIO2!
#define in_led 13

WiFiClient espClient;
PubSubClient clientMQTT;

void setup() {
  Serial.begin(115200);
  setup_wifi();
  clientMQTT.setClient(espClient);
  clientMQTT.setServer(mqtt_server, mqtt_port);
  clientMQTT.setCallback(callback);
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(in_led, OUTPUT);
  digitalWrite(in_led, HIGH);
}

void setup_wifi() {
  delay(10);
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(wifi_ssid);

  WiFi.begin(wifi_ssid, wifi_password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void reconnect() {
  // Loop until we're reconnected
  while (!clientMQTT.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Attempt to connect
    // If you do not want to use a username and password, change next line to
    // if (clientMQTT.connect("ESP8266Client")) {
    if (clientMQTT.connect("ESP8266Client", mqtt_user, mqtt_password)) {
      Serial.println("connected");
    } else {
      Serial.print("failed, rc=");
      Serial.print(clientMQTT.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}

void callback(char* topic, byte* payload, unsigned int length) {
 Serial.print("Message arrived [");
 Serial.print(topic);
 Serial.print("] ");
 for (int i = 0; i < length; i++) {
  char receivedChar = (char)payload[i];
  Serial.print(receivedChar);
  if (receivedChar == '0')
   digitalWrite(in_led, LOW);
  if (receivedChar == '1')
   digitalWrite(in_led, HIGH);
 }
 Serial.println();
}

void loop() {
  if (!clientMQTT.connected()) {
    reconnect();
  }
  clientMQTT.loop();
  // Publishes a random 0 and 1 like someone switching off and on randomly (random(2))
  clientMQTT.publish(out_topic, "ITEM STOLEN!", true);
  delay(1000);
  //clientMQTT.subscribe(in_topic);
  delay(1000);
}
