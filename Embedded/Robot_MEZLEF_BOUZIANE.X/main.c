#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "ChipConfig.h"
#include "IO.h"
int main (void){

    InitOscillator();
    InitIO();
    LED_BLANCHE_1 = 0;
    LED_BLEUE_1 = 1;
    LED_ORANGE_1 = 1;
    LED_ROUGE_1 = 1;
    LED_VERTE_1 = 0;

    while(1){
    } // fin main
}