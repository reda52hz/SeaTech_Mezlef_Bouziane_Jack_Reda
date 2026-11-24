#ifndef PWM_H
#define PWM_H
#define PWMPER 24.0
#define MOTEUR_DROIT 0
#define MOTEUR_GAUCHE 1


extern double talon;
void InitPWM(void);
//void PWMSetSpeed(float vitesseEnPourcents, unsigned char moteur);
void PWMUpdateSpeed();
void PWMSetSpeedConsigne(float vitesseEnPourcents, char moteur);


#endif