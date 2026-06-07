int sensorPin = A0;
int ledPin = 8;

void setup() {
	    pinMode(ledPin, OUTPUT);
}

void loop() {

	    int value = analogRead(sensorPin);

	        float voltage = value * 5.0 / 1023.0;
		    float temp = voltage * 100;

		        if(temp > 28)
				        digitalWrite(ledPin, HIGH);
			    else
				            digitalWrite(ledPin, LOW);

			        delay(1000);
}
