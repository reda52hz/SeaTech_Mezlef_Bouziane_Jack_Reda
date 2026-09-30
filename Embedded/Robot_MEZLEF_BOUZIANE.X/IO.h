#ifndef IO_H
#define IO_H

//Affectation des pins des LEDS    
#define LED_BLANCHE_1 _PMA6/RJ6
#define LED_BLEUE_1 _PMA6/RJ5
#define LED_ORANGE_1 _PMA6/RJ4
#define LED_ROUGE_1 _PMA11/RJ11
#define LED_VERTE_1 _RH10

// Prototypes fonctions
void InitIO();
void LockIO();
void UnlockIO();

#endif /* IO_H */