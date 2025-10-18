#include <mega32.h>
#include <delay.h>

int y_up=0,d_up,y_down=0,d_down=0;
int Up_Counter=0,Down_Counter=99;
unsigned char bts[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F ,0x6F};
 
void main(void)
{
    DDRA=0xff;
    DDRB=0xff;
    
    PORTB=0;
    
    while (1)
     {
        d_up=Up_Counter/10;
        y_up=Up_Counter%10;
        
        d_down=Down_Counter/10;
        y_down=Down_Counter%10;
        
        //--------------------------------
        PORTA=bts[y_up];
        PORTB.4=1;
        delay_ms(1);
        PORTB.4=0;
        
        PORTA=bts[d_up];
        PORTB.3=1;
        delay_ms(1);
        PORTB.3=0; 
        
        //---------------------------------
        PORTA=bts[y_down];
        PORTB.2=1;
        delay_ms(1);
        PORTB.2=0;
        
        PORTA=bts[d_down];
        PORTB.1=1;
        delay_ms(1);
        PORTB.1=0;
        
        
        delay_ms(45);
    
        Up_Counter++;
        if(Up_Counter==100)Up_Counter=0;
        
        Down_Counter--;
        if(Down_Counter==0)Down_Counter=99; 

     }
}
