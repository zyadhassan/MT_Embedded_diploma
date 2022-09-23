/*
 * main.c
 *
 *  Created on: Sep 4, 2022
 *     	Example_5
 *      (  Buzzer is ON while the  push Button )
 */

#define F_CPU 16000000UL
#include<avr/io.h>
#include<util/delay.h>

int main(void){
	/* init */
	DDRD&=~(1<<PD3); // 0 --> ON , 1 --> OFF

	DDRC|=(1<<PC5); // 0 --> OFF , 1 --> ON
	PORTC&=~(1<<PC5);

	while(1){
		if(!(PIND&(1<<PD3))){
			PORTC|=(1<<PC5);
		}
		else{
			PORTC&=~(1<<PC5);
		}


	}





}
