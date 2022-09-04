/*
 * main.c
 *
 *  Created on: Sep 4, 2022
 *      Author: Zyad Hassan
 *
 *      Challenge 2
 */



#include<avr/io.h>
#include<util/delay.h>
#define F_CPU 1000000UL

void LED_EVEN(){
	PORTD=0x55;
	_delay_ms(500);
	PORTD=0x00;
	_delay_ms(500);
	return;
}

void LED_ODD(){
	PORTD=0xAA;
	_delay_ms(500);
	PORTD=0x00;
	_delay_ms(500);
	return;
}

int main(void){
	DDRA&=~(1<<PA3); // Button 1 --> Even
	DDRA&=~(1<<PA4); // Button 2 --> Odd
	DDRD=0xFF;
	PORTD=0x00;

	while(1){
		if((PINA & (1<<PA3)) && (PINA&(1<<PA4))){ // Two buttons pressed together

				LED_EVEN();

		}
		else if(PINA&(1<<PA3)){

				LED_EVEN();

		}
		else if(PINA&(1<<PA4)) {

			LED_ODD();

		}
	}
}






