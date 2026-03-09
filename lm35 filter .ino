// LM35 Temperature Signal Filtering
// Arduino Nano + LM35 Sensor

float filteredTemp = 0;
float alpha = 0.1;   // smoothing factor

void setup() {
  Serial.begin(9600);
}

void loop() {

  int raw = analogRead(A0);

  // convert ADC value to voltage
  float voltage = raw * (5.0 / 1023.0);

  // LM35 conversion (10mV per °C)
  float temp = voltage * 100.0;

  // Exponential Moving Average Filter
  filteredTemp = alpha * temp + (1 - alpha) * filteredTemp;

  // Send both signals to Serial Plotter
  Serial.print(temp);          
  Serial.print(",");           
  Serial.println(filteredTemp);

  delay(200);
}
