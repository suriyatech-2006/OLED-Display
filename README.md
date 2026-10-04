# OLED Display

**Author:** suriyakumar P

## Task

Interface an LDR (Light Dependent Resistor) and display its live light-level reading on an SSD1306 OLED display using an ESP32.

## Components

- ESP32 DevKit V4
- LDR / photoresistor sensor
- SSD1306 128x64 I2C OLED display

## Connections

### LDR

| LDR | ESP32 |
|---|---|
| VCC | 3V3 |
| GND | GND |
| AO | GPIO 34 |

### SSD1306 OLED

| OLED | ESP32 |
|---|---|
| VCC | 3V3 |
| GND | GND |
| SDA | GPIO 21 |
| SCL | GPIO 22 |

## Working

The ESP32 continuously reads the analog value from the LDR and displays the live light-level reading on the SSD1306 OLED.

The light level is shown as an ADC value from **0 to 4095**.

## Serial Monitor

The same reading is also printed to the Serial Monitor at **115200 baud**.

## Wokwi

This project is designed to run in the Wokwi ESP32 simulator.
