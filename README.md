# DC Voltmeter using Arduino and LiquidCrystal

## Description

This Arduino project demonstrates a simple DC voltmeter using an Arduino board and a LiquidCrystal display. The code reads an analog voltage from a sensor and displays the measured voltage on the LCD screen. It includes a voltage divider circuit to accurately measure the input voltage.

## Author

- **Author:** Lauren Crist
- **Project:** Ford STEAM Project
- **Date:** June 22, 2018

## Table of Contents

- [Description](#description)
- [Author](#author)
- [Table of Contents](#table-of-contents)
- [Components](#components)
- [Installation](#installation)
- [Usage](#usage)

## Components

- Arduino board
- LiquidCrystal display
- Voltage divider circuit with resistors (R1 and R2)

## Installation

1. Connect the hardware components.
2. Open the Arduino IDE.
3. Upload the provided Arduino sketch (`voltmeter.ino`) to your Arduino board.

## Usage

1. After uploading the code to the Arduino board, the LCD will display "DC VOLTMETER" as the initial message.
2. Connect the input voltage you want to measure to the analog input pin (defined as `analogInput` in the code).
3. The measured voltage will be displayed on the LCD screen.
4. If the input voltage falls below 0.09V, the LCD will display "INPUT V= 0.00" to avoid displaying noisy readings.
