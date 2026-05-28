// Ultrasonic sensor pins
const int trigPin = A0;
const int echoPin = A1;

// Variables for distance calculation
long duration;
int distance;

void setup() {
  // Initialize Serial Monitor
  Serial.begin(9600);

  // Set ultrasonic sensor pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.println("Ultrasonic Sensor Test Starting...");
}

void loop() {
  // Send a 10-microsecond pulse to trigger
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the echo pulse duration
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in centimeters
  distance = duration * 0.034 / 2;

  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Short delay before next reading
  delay(500);
}
