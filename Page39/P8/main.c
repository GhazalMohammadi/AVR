#include <mega32.h>
#include <delay.h>
unsigned char Ascending_Counter=0 , Descending_Counter=9;
void main(void)
{
    DDRA = 0xff;

    PORTA=(Descending_Counter<<4)|Ascending_Counter;
    while (1)
    {  
       
       if(Ascending_Counter>9 ){
            Ascending_Counter=0;
       }
       if(Descending_Counter==255){
              Descending_Counter=9;
       }  
       
       PORTA =(Descending_Counter<<4)|Ascending_Counter;
       delay_ms(500);
       Ascending_Counter++;
       Descending_Counter--;
       
    }
}
