#ifndef AMPLIFIER_H
#define AMPLIFIER_H

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

// A function that prompts the user to enter in the number of stages from the user, and must use fscanf
unsigned int getStages();

// A function that prompts the user to enter the frequency, and must use fscanf
double getFreq();

// A function that calculates and returns the voltage gain
double getVoltGain( unsigned int stages, double frequency );

#endif