#ifndef IO_H
#define IO_H

//Affectation des pins des LEDS    
#define LED_BLANCHE_1 _LATJ6 //pin 134
#define LED_BLEUE_1 _LATJ5 // pin 133
#define LED_ORANGE_1 _LATJ4 // pin132
#define LED_ROUGE_1 _LATJ11 //pin 9
#define LED_VERTE_1 _LATH10 //pin 83
 
#define LED_BLANCHE_2 _LATA0 //pin 25
#define LED_BLEUE_2 _LATA9 //pin 39
#define LED_ORANGE_2 _LATK15 //pin 53
#define LED_ROUGE_2 _LATA10 //pin 40
#define LED_VERTE_2 _LATH3 //pin 46


// Prototypes fonctions
void InitIO();
void LockIO();
void UnlockIO();

#endif /* IO_H */