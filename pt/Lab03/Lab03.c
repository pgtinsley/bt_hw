#include "amplifier.h"

int main(void){

    unsigned int stages;
    double frequency;
    double voltGain;

    stages = getStages();
    
    frequency = getFreq();

    voltGain = getVoltGain(stages, frequency);
    
	fprintf( stdout, "voltGain = %.4lf\n", voltGain);

    return 0;
}


