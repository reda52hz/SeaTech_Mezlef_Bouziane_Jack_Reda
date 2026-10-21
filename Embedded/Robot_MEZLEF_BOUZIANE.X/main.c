#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "ChipConfig.h"
#include "IO.h"
#include "timer.h"
#include "robot.h"
#include "PWM.h"

int main (void){

    InitOscillator();
    InitIO();

    InitTimer23();
    InitTimer1();
    
    InitPWM();
    PWMSetSpeed(90); // 0-> H=13.02 : L=13.02 
    //10 -> H=74.36 : L=20.05
    //20 -> H=130 : L=17.35
    //30 -> H=174 : L=47.33
    //40 -> H=174 : L=17.97
    //50 -> H=130 : L=5.542
    //70 -> H=173.6 : L=28.9
    //90 -> H=130 : L=17.35
    //100 -> H=130 : L=17.35
   
    
    

    LED_BLANCHE_1 = 1;
    LED_BLEUE_1 = 1;
    LED_ORANGE_1 = 1;
    LED_ROUGE_1 = 1;
    LED_VERTE_1 = 1;

    LED_BLANCHE_2 = 1;
    LED_BLEUE_2 = 1;
    LED_ORANGE_2 = 1;
    LED_ROUGE_2 = 1;
    LED_VERTE_2 = 1;
    
 
    while(1){
                
    } // fin main
}