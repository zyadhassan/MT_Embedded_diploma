/*
 * main.c
 *
 *  Created on: Sep 3, 2022
 *      Author: Zyad Hassan
 *      	Example_1
 *      ( LED is ON while the push Button )
 */

#include<avr/io.h>
#include<util/delay.h>
#define F_CPU 16000000UL

void main(void){
	// Intilaize
	DDRD&=~(1<<2);
	DDRC|=(1<<1);

	PORTC&=~(1<<1);//LED is OFF

	// Super Loop
	while(1){
		if(!(PIND&(1<<2))){
			PORTC|=(1<<1);
		}
		else{
			PORTC&=~(1<<1);
		}
	}





	return;
}

