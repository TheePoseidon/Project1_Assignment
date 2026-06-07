# Q4: Embedded systems

A smart temperature monitoring system

1 sensor - LM36 Temperature sensor
1 controller - Arduino uno
1 actuator - LED


## Explanation

The LM35 sensor continuously measures the room temperature and sends an analog voltage signal to the Arduino through pin A0. The Arduino reads this signal, converts it into a temperature value, and compares it with a predefined threshold of 28°C. If the temperature exceeds 28°C, the Arduino sends a digital signal to pin D8, turning the LED ON. If the temperature is 28°C or lower, the LED remains OFF.

## Block and circuit diagram

Tinkercard: [Temperature monitoring system](https://www.tinkercad.com/things/03jd5K9wwyx/editel?returnTo=%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=7-6m_771bF1xYHEUlXeGaq3PLMwEJ0iZE_X5NpNTteI)
