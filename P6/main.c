#include <mega32.h>
#include <delay.h>
unsigned char i = 0 , j = 0 ;
void main(void)
{
    DDRA = 0xff;
    DDRC.0 = 0 ;
    DDRD.0 = 0 ;
    DDRD.1 = 0 ;
    DDRD.2 = 0 ;
    DDRD.7 = 1 ;
    DDRB = 0xff ; 
    while (1)
        { 

            if(PINC.0 == 0){ 

                if(i>100){
                    i = 0 ;
                }
                if(i%5==0){
                    PORTD.7 = 1 ;
                    delay_ms(100);
                    PORTD.7 = 0 ; 
                    PORTA = i ;
                    i++;
                    delay_ms(500);                   
                }
                else{
                    PORTA = i ;
                    i++;
                    delay_ms(500);          
                }
            }
            
            if(PIND.0 == 0){
               i = 0 ;
               PORTA = i ;
               PORTD.7 = 1 ;
               delay_ms(500);
               PORTD.7 = 0 ;
            }
            
            if(PIND.1 == 0 && j<=20){
               j++ ;
               PORTB= j ; 
               delay_ms(100);
               while(PIND.1 == 0);
                  
            }
            
            if(PIND.2 == 0 && j>0){
              j-- ;
              PORTB= j ; 
              delay_ms(100);
              while(PIND.2 == 0);  
            }
         
        }
}
