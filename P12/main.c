#include <mega32.h>
#include <delay.h>
unsigned char i =0 , y=0 , d=0;
unsigned char bts[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
void main(void)
{
    DDRA = 0xff;
    DDRB = 0xff;
    while (1)
        {
            for(i=0;i<100;i++){
               d = i/10;
               y = i%10;
               PORTA=bts[d];
               PORTB=bts[y];
               delay_ms(300);
            }
        }
}
