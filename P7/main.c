#include <mega32.h>
#include <delay.h>
unsigned char i = 0 ;
void main(void)
{
    DDRA = 0xff;
    DDRC.0 = 0 ;
    DDRC.1 = 0 ;
    DDRC.2 = 0 ;
    DDRC.3 = 0 ;
    while (1)
        {   
            //Ascending Counter
            if(PINC.0 == 0){
                while(1){
                    if(PINC.3 == 0 || PINC.2 == 0){
                        i = 0;
                        PORTA = 0;
                        break;
                    }
                    if(PINC.1 == 0){
                        break;                    
                    }
                    i++ ;
                    PORTA = i ;
                    delay_ms(100);  
                }

            } 
            
            
            //Descending Counter
            if(PINC.1 == 0){
              while(i>0){
                 if(PINC.3 == 0 || PINC.2 == 0){
                        i = 0;
                        PORTA = 0;
                        break;
                 }
                 if(PINC.0 == 0){
                        break;                    
                 }
                 i-- ;
                 PORTA = i ;
                 delay_ms(100);
              }  
            }
          
            //Circular Loop
            if(PINC.2 == 0){
                while(1){
                
                    if(PINC.3 == 0 || PINC.0 == 0 || PINC.1 == 0){
                        i = 0;
                        PORTA = 0;
                        break;
                    } 
                    
                    if(i>=9){
                        i = 0;
                    }else{
                        PORTA = (1<<i) ;
                        delay_ms(100);
                        i++;
                    }  
                }
            }
               
            //Johnson Loop
            if(PINC.3 == 0){ 
               while(1){ 
               
                    if(PINC.2 == 0 || PINC.0 == 0 || PINC.1 == 0){
                       i = 0;
                       PORTA = 0 ;
                       break;
                    } 
                    
                    
                    if(i>=8){
                        i = 0 ;
                    }else{
                        PORTA = (1<<i) ^ PORTA ;
                        delay_ms(100);
                        i++;                    
                    }

               } 
            }

        }
}
