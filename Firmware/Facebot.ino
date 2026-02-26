#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

const char* ssid = "AndaniGod";
const char* password = "Iknowheis";

#define POWER_SWITCH 4
#define STATUS_LED 2

enum SystemState {
  BOOTING,
  IDLE,
  LISTENING,
  PROCESSING,
  SPEAKING
};

SystemState currentState = BOOTING;

void setup() {
  Serial.begin(115200);
  pinMode(POWER_SWITCH, INPUT_PULLUP);
  pinMode(STATUS_LED, OUTPUT);
  bootSystem();
}

void loop() {

  switch (currentState) {

    case IDLE:
      if (digitalRead(POWER_SWITCH) == LOW) {
        startAssistant();
      }
      break;

    case LISTENING:
      listenUser();
      break;

    case PROCESSING:
      processRequest();
      break;

    case SPEAKING:
      speakResponse();
      break;

    default:
      break;
  }
}

void bootSystem() {
  Serial.println("Booting AI Assistant...");
  connectWiFi();
  initDisplay();
  initAudio();
  currentState = IDLE;
}

void connectWiFi() {
  Serial.print("Connecting to WiFi");
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi Connected!");
  digitalWrite(STATUS_LED, HIGH);
}

void startAssistant() {
  Serial.println("Assistant Activated");
  playGreeting();
  currentState = LISTENING;
}

void listenUser() {
  Serial.println("Listening (Mic Placeholder)...");
  delay(2000);
  currentState = PROCESSING;
}

void processRequest() {
  Serial.println("Processing Request (API Call)...");
  makeAPIRequest();
  currentState = SPEAKING;
}

void speakResponse() {
  Serial.println("Speaking Response (Speaker Placeholder)...");
  delay(2000);
  currentState = IDLE;
}

void makeAPIRequest() {

  if (WiFi.status() == WL_CONNECTED) {

    HTTPClient http;
    http.begin("https://api.chucknorris.io/jokes/random");

    int httpResponseCode = http.GET();

    if (httpResponseCode > 0) {

      String payload = http.getString();

      DynamicJsonDocument doc(2048);
      deserializeJson(doc, payload);

      String response = doc["value"];

      Serial.println("AI Response:");
      Serial.println(response);

    } else {
      Serial.println("API Error");
    }

    http.end();
  }
}

void initDisplay() {
  Serial.println("Display Initialized (Placeholder)");
}

void initAudio() {
  Serial.println("Audio System Initialized (Placeholder)");
}

void playGreeting() {
  Serial.println("Speaking: How can I help you?");
}
