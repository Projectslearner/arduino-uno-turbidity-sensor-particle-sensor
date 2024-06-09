/*
    Project name : Turbidity Sensor
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-turbidity-sensor-particle-sensor
*/

const int turbidityPin = A0; // Analog pin connected to the turbidity sensor
const int ledPin = 13; // Pin connected to the LED for indication
const int threshold = 500; // Turbidity threshold value

void setup()
 {
  pinMode(turbidityPin, INPUT); // Set turbidityPin as input
  pinMode(ledPin, OUTPUT); // Set ledPin as output
  Serial.begin(9600); // Initialize serial communication
}

void loop()
 {
  int turbidityValue = analogRead(turbidityPin); // Read the analog value from turbidity sensor
  Serial.print("Turbidity value: ");
  Serial.println(turbidityValue); // Print the turbidity value to serial monitor

  // Check if turbidity value is above the threshold
  if (turbidityValue > threshold)
   {
    digitalWrite(ledPin, HIGH); // Turn on LED if turbidity is high (water is dirty)
    Serial.println("Water is dirty!");
  } 
  else
   {
    digitalWrite(ledPin, LOW); // Turn off LED if turbidity is low (water is clean)
    Serial.println("Water is clean.");
  }

  delay(1000); // Delay for stability
}
