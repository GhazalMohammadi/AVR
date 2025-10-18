#include <mega32.h>
#include <delay.h>
unsigned char Ascending_Counter=0 , Descending_Counter=9;
void main(void)
{
    DDRA = 0xff;
    DDRB = 0xff;
    PORTB=Descending_Counter;
    while (1)
    {  
       
       if(Ascending_Counter>9){
            Ascending_Counter=0;
       }
       PORTA = Ascending_Counter;
       delay_ms(100);
       Ascending_Counter++;
       
       
       
       if(Descending_Counter==255){
              Descending_Counter=9;
       }
       PORTB = Descending_Counter;
       delay_ms(100);
       Descending_Counter--;
       
    }
}
