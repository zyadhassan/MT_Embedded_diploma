/*
 * main.c
 *
 *  Created on: Sep 4, 2022
 *     	Example_6
 *      (  7 Segmant Using INT2 )
 */

#define F_CPU 1000000UL
#include<avr/io.h>
#include <avr/interrupt.h>
#include<util/delay.h>
int num=0;
void init_INT2(void){
	DDRB&=~(1<<PB2);
	SREG|=(1<<7);
	MCUCSR|=(1<<6);
	GICR|=(1<<5);
}

ISR(INT2_vect){
	if((PORTC&0x0F)<9){
		num++;
		PORTC=(PORTC&0xF0) | (num&0x0F);
	}
	else{
		num=0;
		PORTC=(PORTC&0xF0) | (num&0x0F);
	}
}



int main(void){
	DDRC=0xFF;
	PORTC=0x00;
	init_INT2();
	while(1){


	}
}

