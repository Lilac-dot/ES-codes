// turning an led on and off using a switch

int ledPin = 13;
int buttonPin = 2; //for switch

void setup() {
	pinMode (ledPin, OUTPUT);
	pinMode (buttonPin, INPUT_PULLUP); //use INPUT_PULLUP instead of external resistor

}

void loop() {
	int buttonMode = digitalRead(buttonPin);

	//switch pressed == led on
	if (buttonMode == LOW) {
		digitalWrite(ledPin, HIGH);
	}
	
	else if(buttonMode == HIGH) {
		digitalWrite(ledPin, LOW);
	}
}
