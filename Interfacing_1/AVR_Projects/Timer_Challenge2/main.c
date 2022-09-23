

#include<avr/io.h>
#include<util/delay.h>
#include <avr/interrupt.h>

unsigned char tick=0;

void Timer0_init(void){
	TCCR0=(1<<7)|(1<<3)|(1<<CS01);
	TCNT0=0;
	OCR0=50;
	TIMSK|=(1<<1);
	SREG|=(1<<7);
}


ISR(TIMER0_COMP_vect){
	tick++;
	PORTC^=(1<<PC0);
	if(tick%2==0){
		PORTC^=(1<<PC1);
	}
	if(tick%4==0){
		PORTC^=(1<<PC2);
	}
}


int main(void){
	DDRC|=(1<<PC0)|(1<<PC1)|(1<<PC2);
	PORTC&=~0x07;
	Timer0_init();
	while(1);
}
