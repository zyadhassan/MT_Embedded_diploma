/*
 * main.c
 *
 *  Created on: Sep 4, 2022
 *     Author: Zyad Hassan
 *      	Example_3
 *      ( 2 LEDs is ON while the 2 push Buttons )
 */


#include<avr/io.h>
#include<util/delay.h>
#define F_CPU 16000000UL

void main(void){
	// Button 1 PORTB0
	DDRB&=~(1<<PB0);


	// Button 2 PORTB1
	DDRB&=~(1<<PB1) ;

	// LED 1 PORTC0
	DDRC|=(1<<PC0);
	PORTC|=(1<<PC0); // LED 1 is OFF

	// LED 2 PORTC1
	DDRC|=(1<<PC1);
	PORTC|=(1<<PC1); // LED 2 is OFF

	while(1){
		if(PINB & (1<<PB0)){
			PORTC &= ~(1<<PC0);

		}
		else{
			PORTC|=(1<<PC0);
		}
		if(PINB&(1<<PB1)){
			PORTC&=~(1<<PC1);

		}
		else{
			PORTC|=(1<<PC1);
		}

	}


}
