//define Pins
#include <Servo.h>
Servo servo;
int trigPin = 11;
int echoPin = 12;
// defines variables
long duration;
int distance;
void setup() 
{
  servo.attach(13);
  servo.write(180);
 delay(2000);
  
// Sets the trigPin as an Output
pinMode(trigPin, OUTPUT);
// Sets the echoPin as an Input 
pinMode(echoPin, INPUT);
}
void loop() 
{
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
if ( distance <= 25   ) // Change Distance according to Ultrasonic Sensor Placement
 {
servo.write(180);
delay(3000);
 } 
else 
{
servo.write(90);
 }
}
