


#include <Firmata.h>

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0-5:
  int sensorValue_A0 = analogRead(A0);
  int sensorValue_A1 = analogRead(A1);
  int sensorValue_A2 = analogRead(A2);
  int sensorValue_A3 = analogRead(A3);
  int sensorValue_A4 = analogRead(A4);
  int sensorValue_A5 = analogRead(A5);

  
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  //float voltage = sensorValue * (5.0 / 1023.0);

  
  // print out the value you read:
  Serial.print(sensorValue_A0);
  Serial.print("\t");
  Serial.print(sensorValue_A1);
  Serial.print("\t");
  Serial.print(sensorValue_A2);
  Serial.print("\t");
  Serial.print(sensorValue_A3);
  Serial.print("\t");
  Serial.print(sensorValue_A4);
  Serial.print("\t");
  Serial.println(sensorValue_A5);
}
