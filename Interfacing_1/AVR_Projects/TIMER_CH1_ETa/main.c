
#include<avr/io.h>
#include<util/delay.h>
#include <avr/interrupt.h>



unsigned char tick=0;
int num=0;



void init_Timer0(void){

	TCCR0=(1<<7)|(1<<2);
	TCNT0=0;
	TIMSK|=(1<<0);
	SREG|=(1<<7);

}
// need 122 tick for 1 second as one tick over 256*32micro sec

ISR(TIMER0_OVF_vect){
	tick++;
	if(tick==244){
		// incerment 7 segment
		if(num<9){
			num++;
		}
		else{
			num=0;
		}
		Decode(num);
		tick=0;
	}
}

void Decode(int n ){
	switch(n){
	case 0:
		PORTA=(PORTA&~(0xFE)) |(0b01111110) ;
		break;
	case 1:
		PORTA=(PORTA&~(0xFE)) | (0x0C);
		break;
	case 2:
		PORTA=(PORTA&~(0xFE)) |(0xB6) ;
		break;
	case 3:
		PORTA=(PORTA&~(0xFE)) | (0x9E);
		break;
	case 4:
		PORTA=(PORTA&~(0xFE)) | (0xCC);
		break;
	case 5:
		PORTA=(PORTA&~(0xFE)) | (0xDA);
		break;
	case 6:
		PORTA=(PORTA&~(0xFE)) | (0xF8);
		break;
	case 7:
		PORTA=(PORTA&~(0xFE)) | (0x0E);
		break;
	case 8:
		PORTA=(PORTA&~(0xFE)) | (0xFE);
		break;
	case 9:
		PORTA=(PORTA&~(0xFE)) | (0xDE);
		break;
	}


return;


}





int main(void){

	/*  PD2 Push Button to increment
	 *   0 --> ON , 1 --> OFF
	 *
	 *  PD3 Push Button to decrement
	 *      0 --> ON , 1 --> OFF
	 *
	 * */
	DDRC|=(1<<PC6);
	PORTC|=(1<<PC6);
	init_Timer0();

	/* 7 Segment connect to PA1 --> PA7 */
	DDRA=0xFE;
	PORTA&=~(0xFE); // Set the portA to 0
	Decode(0);
	while (1){
				}



	}
