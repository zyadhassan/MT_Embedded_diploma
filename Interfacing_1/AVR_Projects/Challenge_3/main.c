/*
 * main.c
 *
 *  Created on: Sep 4, 2022
 *     	Example_6
 *      (  7 segmant increment and decrement by buttons )
 */

#define F_CPU 16000000UL
#include<avr/io.h>
#include<util/delay.h>
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

	DDRD&=~(1<<PD3) &~(1<<PD2);

	/* 7 Segment connect to PA1 --> PA7 */
	DDRA=0xFE;
	PORTA&=~(0xFE); // Set the portA to 0
	int flag=1;
	int num=0;
	Decode(0);
	while (1){
		if(!(PIND&(1<<PD2))){
			_delay_ms(30);
			if(!(PIND&(1<<PD2))){
				if(flag){
					if(num<9){
						num++;
					}
					Decode(num);
					flag=0;}

			}else{
				flag=1;
		}

		}
		if(!(PIND&(1<<PD3))){
					_delay_ms(30);
					if(!(PIND&(1<<PD3))){
						if(flag){
							if(num>0){
								num--;
							}
							Decode(num);
							flag=0;}

					}
					else{
						flag=1;
					}

				}



	}





}
