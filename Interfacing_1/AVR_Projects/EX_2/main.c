
/************************** EXAMPLE 2 **********************/

#include<avr/io.h>
#include<util/delay.h>
#define F_CPU 16000000UL

int main(void)
{
	DDRC|=(1<<2); //PC2 is o/pin
	PORTC&=~(1<<2);// intlize the LED OFF


	while(1)
	{
		PORTC|=(1<<2);
		_delay_ms(1000);
		PORTC&=~(1<<2);
		_delay_ms(1000);


	}

}


