/*
 * main.c
 *
 *  Created on: Sep 4, 2022
 *     	Example_6
 *      (  Buzzer is ON while the  push Button )
 */

#define F_CPU 1000000UL
#include<avr/io.h>
#include<util/delay.h>


int main(void){
	DDRD&=~(1<<PD4);
	DDRC=0xFF;
	PORTC=0x00;
	int flag=1;
	while(1){
		if(PIND&(1<<PD4)){
			_delay_ms(30);
			if(PIND&(1<<PD4) && flag){
				if(PORTC<9){
					PORTC++;
				}
				else{
					PORTC=0;
				}
				flag=0;
			}
		}
		else{
			flag=1;
		}
	}

}
