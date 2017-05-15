/* Ultrasonic Sensor V3.3 test 
 *  Created by Jean-Christophe Owens
 *  May 15th 2017
 */

//Defines the outpin to the Robot
const int x = 3;
const int y = 3;


// Global Variables
long duration;
int distance;

void setup() {
  // Finds the pin of the suject and enters values for that specific port
  pinMode(x, INPUT);
  pinMode(y, OUTPUT);
  Serial.begin(3000);

}

void loop() {

  // Clears the trigPin
  digitalWrite(x, LOW);
  delayMicroseconds(5);


  digitalWrite(x, HIGH);
  delayMicroseconds(5);
  digitalWrite(x, LOW);

  //Reads the squrewave travel time
  duration = pulseIn(y, HIGH);

  //calculting distance
  distance = duration*0.0034/2;

  Serial.print("distance");
  Serial.print("duration");
}
