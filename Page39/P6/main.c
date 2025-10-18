#include <mega32.h>
#include <delay.h>
int s=0,m=59,h=12;
void main(void)
{

    DDRA=0xff;
    DDRB=0xff;
    DDRC=0xff;
    
    PORTA=((s/10)<<4)|(s%10);;
    PORTB=((m/10)<<4)|(m%10);
    PORTC=((h/10)<<4)|(h%10);;
    while (1)
    {

        s++;
        if(s>59){
            s=0;
            PORTA=s;
            m++;
            if(m>59){
                m=0;
                PORTB=m;
                
                h++;
                if(h>12){
                    h=1;
                    PORTC=h;
                }
                
                PORTC=((h/10)<<4)|(h%10);
            }
            PORTB=((m/10)<<4)|(m%10);
            
        }
       
       
        PORTA=((s/10)<<4)|(s%10);;  
        delay_ms(200);

    }
}
