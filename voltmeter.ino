/*
  Lauren Crist
  Ford STEAM Project
  Date: 6/22/18
  Description: This code reads analog voltage from a sensor and displays it on an LCD screen, acting as a DC voltmeter.
*/

#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
int analogInput = 0;
float vout = 0.0;
float vin = 0.0;
float R1 = 100000.0; // Resistance of R1 (100K) - see text!
float R2 = 10000.0;  // Resistance of R2 (10K) - see text!
int value = 0;

void setup() {
  // Set up the analog input pin and initialize the LCD display
  pinMode(analogInput, INPUT);
  lcd.begin(16, 2);
  lcd.print("DC VOLTMETER");
}

void loop() {
  // Read the value at the analog input
  value = analogRead(analogInput);

  // Calculate the output voltage based on the analog value
  vout = (value * 5.0) / 1024.0; // Conversion from analog value to voltage

  // Calculate the input voltage using a voltage divider formula
  vin = vout / (R2 / (R1 + R2));

  // Check for low input voltage readings to avoid noise
  if (vin < 0.09) {
    vin = 0.0; // Set the input voltage to 0 if it's too low to be reliable
  }

  // Display the input voltage on the LCD
  lcd.setCursor(0, 1);
  lcd.print("INPUT V= ");
  lcd.print(vin, 2); // Display the voltage with 2 decimal places
  delay(500); // Delay for readability (0.5 seconds)
}