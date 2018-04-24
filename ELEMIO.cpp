//  2018-04-18 by ELEMIO (https://github.com/ELEMIO)

#include "ELEMIO.h"
#include "Arduino.h"
#include "SPI.h"

//     INITIATION 

ELEMIO::ELEMIO(byte pin) {
	_cs = pin;                              // choose the chip select pin
	pinMode(_cs,OUTPUT);                    // set the pin as output
    digitalWrite(_cs,HIGH);                 // set the pin to default HIGH state
    SPI.begin();                            // initiate SPI
    }

//  PUBLIC  METHODS


void ELEMIO::gain(byte value) {
	digitalWrite(_cs,LOW);              // select CHIP
	SPI.transfer(GAIN);                 // send GAIN command
	SPI.transfer(value);                // transfer data
	digitalWrite(_cs,HIGH);             // end transmission
	}
