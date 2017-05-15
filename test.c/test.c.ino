/* Ultrasonic Sensor V3.3 test
    Created by Jean-Christophe Owens
    May 15th 2017
*/
#include "MeOrion.h"

MeUltrasonicSensor ultraSensor(PORT_7); 

void setup() {
  // Finds the pin of the suject and enters values for that specific port
  Serial.begin(9600);

}

void loop() {

  Serial.print("Distance : ");
  Serial.print(ultraSensor.distanceCm() );
  Serial.println(" cm");
  delay(100); /* the minimal measure interval is 100 milliseconds */
}
