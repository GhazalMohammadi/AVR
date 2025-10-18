#include <mega32.h>
#include <delay.h>
unsigned char counter_ascending =0 ;
unsigned char counter_descending = 255;
unsigned char counter_loop = 0;
unsigned char counter_Johnson = 0;
void main(void)
{
    DDRA = 0xff;
    DDRC = 0xff;
    DDRB = 0xff;
    DDRD = 0xff;
    while (1)
        {  
           
           PORTA = counter_ascending ;
           PORTC = counter_descending ;
           
           //Circular Loop
           if(counter_loop>=9){
             counter_loop = 0 ;
           }else{
             PORTB = (1<<counter_loop); 
             counter_loop++;
           }
           
           //Johnson Loop
           if(counter_Johnson>=8){
              counter_Johnson = 0 ;  
           }else{
              PORTD = (1<<counter_Johnson)^PORTD ;
              counter_Johnson++; 
           }     
           
           delay_ms(100);
           //Ascending & Descending Counter
           counter_ascending++ ;
           counter_descending--; 
  
        }
  
}
