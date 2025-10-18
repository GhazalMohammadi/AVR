#include <mega32.h>
#include <delay.h>
unsigned char t=0;
void main(void)
{
    DDRC=0xff;
    DDRB=0xff;
    DDRD=0xff;
    
    DDRA=0x00;
    while (1)
        {
           t=PINA;
           
           PORTB = t/100;
           PORTD = (t%100)/10;
           PORTC = (t%100)%10;

        }
}
