int buzzerPin=5;
const int ledPin=7;
const int trigPin=9;  
const int echoPin=10;

float duration,distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin,HIGH);
  distance = (duration * 0.0343)/2;

  if (distance < 15)
  {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000, 200);
  } else if (distance < 30) {
    digitalWrite(ledPin,High);
    tone(buzzerPin, 500, 200);
  } else {
    noTone(buzzerPin);
    digitalWrite(ledPin, LOW); 
  }

}
