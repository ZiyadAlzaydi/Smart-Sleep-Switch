const int ledPin = 8;
const int buttonPin = 2;
const int pirPin = 7;

bool circuitOn = false;
bool lastButtonState = HIGH;
unsigned long lastMotionTime = 0;
unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 50;
const unsigned long autoOffTime = 10000; 

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(pirPin, INPUT);
}

void loop() {
  
  bool buttonState = digitalRead(buttonPin);
  
  if (buttonState == LOW && lastButtonState == HIGH && millis() - lastDebounceTime > debounceDelay) {
    lastDebounceTime = millis();
    
    circuitOn = !circuitOn;
    
    if (circuitOn) {
      digitalWrite(ledPin, HIGH);
      lastMotionTime = millis();
    } else {
      digitalWrite(ledPin, LOW);
    }
  }
  
  lastButtonState = buttonState;
  
  if (circuitOn && digitalRead(pirPin) == HIGH) {
    lastMotionTime = millis();
  }
  
  if (circuitOn && millis() - lastMotionTime > autoOffTime) {
    circuitOn = false;
    digitalWrite(ledPin, LOW);
  }
}
