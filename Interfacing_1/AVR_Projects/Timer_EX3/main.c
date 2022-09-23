
#include<avr/io.h>
#include<util/delay.h>
#include <avr/interrupt.h>

unsigned char tick=0;

void Timer0_init(void){
	TCCR0=(1<<7)|(1<<3)|(1<<CS02)|(1<<CS00);
	TCNT0=0;
	OCR0=250;
	TIMSK|=(1<<1);
	SREG|=(1<<7);
}


ISR(TIMER0_COMP_vect){
	tick++;
	if(tick==32){
		//toggle led
		PORTC^=(1<<0);
		tick=0;
	}
}

int main(void){
	DDRC|=(1<<0);
	PORTC&=~(1<<0);
	Timer0_init();

	while(1);

}
