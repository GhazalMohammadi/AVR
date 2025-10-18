#include <mega32.h>
#include <delay.h>
unsigned char y=0,d=0,s=0,h=0;
unsigned char bts[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F ,0x6F};
int i=0;
void main(void)
{
    DDRA=0xff;
    DDRB=0xff;
    
    PORTB=0;
    while (1)
    {   
        while(i<10000)
        {
           h=i/1000;
           s=(i%1000)/100;
           d=((i%1000)%100)/10;
           y=((i%1000)%100)%10;
           
           PORTA=bts[y];
           PORTB.4=1;
           delay_ms(1);
           PORTB.4=0;
           
           PORTA=bts[d];
           PORTB.3=1;
           delay_ms(1);
           PORTB.3=0;
           
           PORTA=bts[s];
           PORTB.2=1;
           delay_ms(1);
           PORTB.2=0;
           
           PORTA=bts[h];
           PORTB.1=1;
           delay_ms(1);
           PORTB.1=0;
           
           delay_ms(42);
           i++; 
        }

    }
}
