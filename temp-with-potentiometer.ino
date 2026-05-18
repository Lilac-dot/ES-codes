// temperature sensor code thingy with potentiometer

//connections
int sensorPin = A0;
int ledPin = 13;

int sensorValue = 0;

void setup() {
	pinMode(ledPin, 13);
}

void loop()  {
 	//read the value from sensor
	sensorValue = analogRead(sensorPin);
 	//turn the ledPin on
	digitalWrite(ledPin, HIGH);
 	//stop the program for <sensorvalue> milliseconds
	delay(sensorValue);
 	//turn the led off
	digitalWrite(ledPin, LOW);
	delay(sensorValue);
}
