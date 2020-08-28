#include "amplifier.h"
#include "math.h"

// A function that prompts the user to enter in the number of stages from the user, and must use fscanf

unsigned int getStages() {

    unsigned int stages;
	
	fprintf( stdout, "Enter number of stages in amplifier [uint] : ");
	
	fscanf( stdin, "%u", &stages );
    
    return stages;
}

// A function that prompts the user to enter the frequency, and must use fscanf

double getFreq() {
    double freq;
	
	fprintf( stdout, "Enter frequency [double] : ");
	
	fscanf( stdin, "%lf", &freq );
    
    return freq;
}

// A function that calculates and returns the voltage gain

double getVoltGain( unsigned int stages, double frequency ) {

    return pow((275)/(sqrt(pow(23,2)+(0.2*pow(frequency,2)))),stages);

}