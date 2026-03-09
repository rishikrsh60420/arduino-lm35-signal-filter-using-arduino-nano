# arduino-lm35-signal-filter-using-arduino-nano
Temperature signal filtering using Arduino Nano and LM35 sensor
components
arduino nano
jumper wires 
lm35 temp sensor 
breadboard 
Working Principle
The LM35 temperature sensor converts temperature into an analog voltage signal. 
The Arduino Nano reads this signal using its Analog-to-Digital Converter (ADC).

Raw sensor readings often contain small fluctuations due to noise. 
To stabilize the signal, an Exponential Moving Average (EMA) digital filter is implemented
Filter Equation
y(n) = αx(n) + (1 − α)y(n−1)

Where:
- x(n) = current sensor reading
- y(n) = filtered output
- α = smoothing factor

## Output
The Arduino Serial Plotter shows two signals:
- Raw temperature signal
- Filtered temperature signal
- soo u can difference before filtering and after filtering 
