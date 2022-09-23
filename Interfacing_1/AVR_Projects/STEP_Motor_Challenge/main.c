
#include<avr/io.h>
#include<util/delay.h>


unsigned int MOVES[8]={8,12,4,6,2,3,1,9};

int main(void){
	DDRC=(DDRC&0xF0)|(0x0F);
	PORTC&=0xF0;
	int count=0;

	while(1){
		PORTC=(PORTC&0xF0)|(MOVES[count%8]);
		count++;
		_delay_ms(500);



	}
}
