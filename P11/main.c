#include <mega32.h>
#include <delay.h>
unsigned char y=0 , d=0;
int i=0;
void main(void)
{
    DDRA = 0xff;
    while (1)
        {
            for(i=0; i<=99 ; i++){
                d = i/10;
                y = i%10;
                PORTA = (d<<4)| y;
                delay_ms(100);
            }
        }
}
