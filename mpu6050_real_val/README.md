# MPU6050 Accelerometer Data Reader

This sketch initialises an MPU6050 inertial measurement unit over I2C and continuously reads normalised accelerometer values (X, Y, Z axes in g) every 500 ms, printing them to the Serial Monitor at 115200 baud. On startup it also prints the sensor configuration including sleep mode status, clock source, and measurement range settings.

## Hardware

- Arduino Uno
- MPU6050 accelerometer/gyroscope module

## Pin Connections

| Component | Arduino Pin |
|-----------|-------------|
| MPU6050 SDA | A4 (I2C SDA) |
| MPU6050 SCL | A5 (I2C SCL) |
| MPU6050 VCC | 3.3V or 5V |
| MPU6050 GND | GND |

**Last Modified:** 2018-06-04
