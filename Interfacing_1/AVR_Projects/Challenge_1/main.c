/*
 * main.c
 *
 *  Created on: Sep 4, 2022
 *         Challenge 1
 *      ( 3 LEDs each one works for half a seconds  )
 */

#include<avr/io.h>
#include<util/delay.h>
#define F_CPU 16000000UL

void LED_on(unsigned char PCX){
	PORTC|=(1<<PCX);
	return;
}
void LED_off(unsigned char PCX){
	PORTC&=~(1<<PCX);
	return;
}
int main(void){
	// PC0,PC1,PC2 --> Postive Logic LEDs
	DDRC|=(1<<PC0) | (1<<PC1) | (1<<PC2);
	PORTC&=~(1<<PC0) & ~(1<<PC1) & ~(1<<PC2);
	unsigned char LEDs[3]={PC0,PC1,PC2};
	unsigned char i=0;
	while(1){
		i=i%3;
		LED_on(LEDs[i]);
		_delay_ms(500);
		LED_off(LEDs[i]);
		i++;
	}






}
