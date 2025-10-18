#include <mega32.h>
#include <delay.h>
unsigned char y=0 , d=0 , s=0 , h=0;
void main(void)
{
    DDRA = 0xff;
    DDRB = 0xff;
    DDRC = 0xff;
    DDRD = 0xff;
    while (1)
        {
           y++;
           if(y>9){
                y = 0;
                d++; 
                if(d>9){
                    d = 0;
                    s++;
                    
                    if(s>9){
                        s = 0;
                        h++;
                        if(h>9) h=0;
                    }
                }
           }
           
           PORTB = d;
           PORTA = y; 
           PORTD = s;
           PORTC = h;
           delay_ms(100);
        }
}
