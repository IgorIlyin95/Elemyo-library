//  Terminal with gain
//  Reads an analog input on pin A0, prints the result to the Serial Monitor.
//  The sensor gain is controlled by the program.
//  Graphical representation is available using Matlab Terminal.
//  2018-04-18 by ELEMIO (https://github.com/ELEMIO/Arduino)
//
// Changelog:
//     2018-04-18 - initial release

/* ============================================
Elemio library code is placed under the MIT license
Copyright (c) 2018 ELEMIO

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
===============================================


Wiring the ELEMIO sensor to an Arduino UNO

ELEMIO -->  UNO
  +        5V
  -        GND
  S        analog pin A0 (or other analog input)
  СS       diginal pin 10  (SS pin)
  SDI      diginal pin 11  (MOSI pin)
  CLK      diginal pin 13  (SCK pin)


*/

// These constants won't change. They're used to give names to the pins used:
const int analogInPin = A0;    // Analog input pin that the sensor is attached to
const int timePeriod = 1;      // Frequency of signal update (time in ms)

int sensorValue = 0;           // value read from the sensor

void setup() {
  
}

void loop() {
  
}
