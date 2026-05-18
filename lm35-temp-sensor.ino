// temperature sensor code

int lm35 = A0; //connection

void setup() {
Serial.begin(9600);
}

void loop() {
int temp_adc_val; //sensor reading
float temp_val;
temp_adc_val = analogRead(lm35);
temp_val = (temp_adc_val * 4.88); //conversion
temp_val = temp_val/10;
Serial.print("Temperature = ");
Serial.print(temp_val);
Serial.print(" degree celcius\n");
delay(1000);
}
