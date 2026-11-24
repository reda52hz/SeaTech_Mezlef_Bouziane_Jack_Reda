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
    
    PWM_ENABLE = 1;

    InitTimer23();
    InitTimer1();
    
    InitPWM();
    PWMSetSpeedConsigne(30, MOTEUR_GAUCHE);
     
    // 0-> H=13.02 : L=13.02 
    //10 -> H=74.36 : L=20.05
    //20 -> H=130 : L=17.35
    //30 -> H=174 : L=47.33
    //40 -> H=174 : L=17.97
    //50 -> H=130 : L=5.542
    //70 -> H=173.6 : L=28.9
    //90 -> H=130 : L=17.35
    //100 -> H=130 : L=17.35
   
    //Moteur unique :
    // 0   -> H = 0.83 us (2.1%)  : L = 0.83 us (2.1%)
    // 10  -> H = 4.83 us (12.1%) : L = 0.83 us (2.1%)
    // 20  -> H = 8.83 us (22.1%) : L = 0.83 us (2.1%)
    // 30  -> H = 12.83 us (32.1%): L = 0.83 us (2.1%)
    // 40  -> H = 16.83 us (42.1%): L = 0.83 us (2.1%)
    // 50  -> H = 20.83 us (52.1%): L = 0.83 us (2.1%)
    // 70  -> H = 28.83 us (72.1%): L = 0.83 us (2.1%)
    // 90  -> H = 36.83 us (92.1%): L = 0.83 us (2.1%)
    // 100 -> H = 40.00 us (100%) : L = 0.83 us (2.1%)
    
    

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