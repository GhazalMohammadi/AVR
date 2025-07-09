#include <mega32.h>
#include <delay.h>
unsigned char i = 0 ;
void main(void)
{
    DDRA = 0xff;
    DDRC = 0xfc;  //0b11111100
    while (1)
        {
            for(i=0 ; i<8 ; i++){
                PORTA = (1<<i)^PORTA; 
                delay_ms(50);
            }
            for(i=2 ; i<8 ; i++){
                PORTC = (1<<i)^PORTC;
                delay_ms(50);
            }

        }
}
