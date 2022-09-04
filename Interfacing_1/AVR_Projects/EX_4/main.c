/*
 * main.c
 *
 *  Created on: Sep 4, 2022
 *     	Example_3
 *      (  LED is ON while the  push Button )
 */


#include<avr/io.h>
#include<util/delay.h>
#define F_CPU 1000000UL
 // PB0 is push button with internal pull up 0 --> ON , 1-->OFF
// PC0 is LED Negative logic 0--> ON , 1--> OFF

int main(void){
	DDRB&=~(1<<PB0); // PB0 is input
	PORTB|=(1<<PB0); // activate internal Pull up Resistor

	DDRC|=(1<<PC0); // PC0 is output
	PORTC|=(1<<PC0); // LED is OFF
	unsigned char flag=0;
	while(1){
		// to avoid push button bounce
		if(!(PINB&(1<<PB0))){
			_delay_ms(30); //Bouncing Period
			if(!(PINB&(1<<PB0))){
				if (flag==0){
					PORTC^=(1<<PC0);
					flag=1;
				}

			}


			}
		else{
			flag=0;
		}

		}

	}






