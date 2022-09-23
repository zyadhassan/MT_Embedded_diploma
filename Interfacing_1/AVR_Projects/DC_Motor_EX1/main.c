
#include<avr/io.h>
#include<util/delay.h>


int main (void){
	//output pins
	DDRC|=(1<<PC0);// output 1
	DDRC|=(1<<PC1); // output 2
	PORTC&=~(1<<PC0) &~(1<<PC1);

	// input pins
	DDRA&=~(1<<PA0);// Clock wise
	DDRA&=~(1<<PA1); // Anti Clock wise
	DDRA&=~(1<<PA2); // Stop


	while(1){

		if(PINA&(1<<PA0)){
			PORTC &=~(1<<PC0);
			PORTC|=(1<<PC1);
		}
		else if(PINA&(1<<PA1)){
			PORTC &=~(1<<PC1);
			PORTC|=(1<<PC0);
		}
		else if(PINA&(1<<PA2)){
			PORTC&=~(1<<PC0) &~(1<<PC1);

		}

	}








}
