/**
 * @file src.ino
 * @author Bennett Miller (sentinelcrash@gmail.com)
 * @brief 
 * 
 * This is an exercise into the FMHXG MF52-103/3435 10k NTC Thermistor.
 * 
 * Using the Steinhart-Hart Equation and a voltage divider, we can determine
 * when a battery or something giving current may be overheating, and thus
 * prevent heat related damage or wear and tear.
 * 
 * ENVIRONMENT USED TO EXERCISE :
 *  
 *  (Quantity). (Type)
 *  1. Arduino Uno (any will do)
 *  1. Cable to communicate with the Arduino via USB
 *  1. 10kOhm Resistor
 *  1. FMHXG MF52-103/3435 10k NTC Thermistor
 *  3. Jumper wires or cable to connect from the circuit to the MCU
 * 
 *  NOTE: ENSURE THAT YOU HAVE ENVIRONMENT VARIABLES FOR ARDUINO CLI, AVRDUDE, and AVRDUDE_CONF set correctly
 *  and that you choose the correct COM port to ensure its functionality, review the Makefile variables if you're
 *  confused
 * 
 * General Schematic:
 * 
 * TODO: FINISH DOCUMENTATION
 * 
 * Steinhart-Hart Calculations:
 * 
 * TODO: FINISH DOCUMENTATION
 * https://www.ametherm.com/thermistor/ntc-thermistors-steinhart-and-hart-equation
 * 
 * @version 0.1
 * @date 2025-07-31
 * 
 * @copyright Copyright (c) 2025
 * 
 */


// Blink code to test if Arduino is working right, this will change soon
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(2000);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1000);
}
