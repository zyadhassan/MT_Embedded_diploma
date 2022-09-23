
#include<avr/io.h>
#include<util/delay.h>
#include <avr/interrupt.h>

unsigned char tick=0;
void init_Timer0(void){

	TCCR0=(1<<7)|(1<<2);
	TCNT0=0;
	TIMSK|=(1<<0);
	SREG|=(1<<7);

}
// need 122 tick for 1 second as one tick over 256*32micro sec

ISR(TIMER0_OVF_vect){
	tick++;
	if(tick==122){
		// incerment 7 segment
		PORTC++;
		if(PORTC==10){
			PORTC=0;
		}
		tick=0;
	}
}

int main(void){
	DDRC=0xFF;
	PORTC=0x00;
	init_Timer0();
	while(1){

	}

}
