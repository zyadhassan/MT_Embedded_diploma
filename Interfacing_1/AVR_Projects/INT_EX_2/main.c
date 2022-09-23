/************************** EXAMPLE 2 **********************/
#define F_CPU 16000000UL

#include<avr/io.h>
#include<util/delay.h>
#include <avr/interrupt.h>




void LED_on(unsigned char PCX){
	PORTC|=(1<<PCX);
	return;
}
void LED_off(unsigned char PCX){
	PORTC&=~(1<<PCX);
	return;
}

/*   The interrupt code */

void init_INT1(void){
	DDRD&=~(1<<PD3);
	SREG|=(1<<7); // Global interrupt enable
	MCUCR|=(1<<3) &~ (1<<2); // triggerd on falling  edge
	GICR|=(1<<7);

}

ISR(INT1_vect){
	for (int i=0;i<5;i++){
		PORTC|=(1<<PC0) | (1<<PC1) | (1<<PC2);
		_delay_ms(1000);
		PORTC&=~(1<<PC0) & ~(1<<PC1) & ~(1<<PC2);
		_delay_ms(1000);

	}
	GIFR|=(1<<7);
}


int main(void){
	// PC0,PC1,PC2 --> Postive Logic LEDs
	DDRC|=(1<<PC0) | (1<<PC1) | (1<<PC2);
	PORTC&=~(1<<PC0) & ~(1<<PC1) & ~(1<<PC2);
	init_INT1();

	unsigned char LEDs[3]={PC0,PC1,PC2};
	unsigned char i=0;
	while(1){
		i=i%3;
		LED_on(LEDs[i]);
		_delay_ms(500);
		LED_off(LEDs[i]);
		i++;
	}
}





