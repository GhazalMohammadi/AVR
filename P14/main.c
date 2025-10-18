#include <mega32.h>
#include <delay.h>
unsigned char name[]={0x77,0x38,0x30,0x00,0x00,0x00,0x00,0x00,0x77,0x38,0x30,0x00,0x00,0x00,0x00,0x00} ;
unsigned char i , k , t=0 , flag1 , flag2 , flag3;
void main(void)
{
    DDRA = 0xff;
    DDRB = 0xff;
    DDRC = 0x00;
    while(1){
             
        if(PINC.0==0){
          while(1){
            s1:
            if(flag1==1){
                flag1=0; 
                break;
            }
            for(i=0;i<8;i++){
                    if(PINC.1==0 || PINC.2==0){
                         flag1=1;
                         t=i;
                         goto s1;
                    } 
                    for(k=0;k<3;k++){
                        //Digit 1----------------
                        PORTA = name[0+i];
                        PORTB.0=1;
                        delay_ms(5);
                        PORTB.0=0;
                
                        //Digit 2----------------
                        PORTA = name[1+i];
                        PORTB.1=1;
                        delay_ms(5);
                        PORTB.1=0;
                
                        //Digit 3----------------
                        PORTA = name[2+i];
                        PORTB.2=1;
                        delay_ms(5);
                        PORTB.2=0; 
                
                        //Digit 4----------------
                        PORTA = name[3+i];
                        PORTB.3=1;
                        delay_ms(5);
                        PORTB.3=0; 
                    
                        //Digit 5----------------
                        PORTA = name[4+i];
                        PORTB.4=1;
                        delay_ms(5);
                        PORTB.4=0;
                
                        //Digit 6----------------
                        PORTA = name[5+i];
                        PORTB.5=1;
                        delay_ms(5);
                        PORTB.5=0;
                
                        //Digit 7----------------
                        PORTA = name[6+i];
                        PORTB.6=1;
                        delay_ms(5);
                        PORTB.6=0; 
                
                        //Digit 8----------------
                        PORTA = name[7+i];
                        PORTB.7=1;
                        delay_ms(5);
                        PORTB.7=0;
                        
                       
                    } 
            }
          }
        }
        
        
        if(PINC.1==0){
          while(1){
            s2:
            if(flag2==1){
                flag2=0; 
                break;
            }
            for(i=8;i>0;i--){
                    if(PINC.0==0 || PINC.2==0){
                         flag2=1;
                         t=i;
                         goto s2;
                    } 
                    for(k=0;k<3;k++){
                        //Digit 1----------------
                        PORTA = name[0+i];
                        PORTB.0=1;
                        delay_ms(5);
                        PORTB.0=0;
                
                        //Digit 2----------------
                        PORTA = name[1+i];
                        PORTB.1=1;
                        delay_ms(5);
                        PORTB.1=0;
                
                        //Digit 3----------------
                        PORTA = name[2+i];
                        PORTB.2=1;
                        delay_ms(5);
                        PORTB.2=0; 
                
                        //Digit 4----------------
                        PORTA = name[3+i];
                        PORTB.3=1;
                        delay_ms(5);
                        PORTB.3=0; 
                    
                        //Digit 5----------------
                        PORTA = name[4+i];
                        PORTB.4=1;
                        delay_ms(5);
                        PORTB.4=0;
                
                        //Digit 6----------------
                        PORTA = name[5+i];
                        PORTB.5=1;
                        delay_ms(5);
                        PORTB.5=0;
                
                        //Digit 7----------------
                        PORTA = name[6+i];
                        PORTB.6=1;
                        delay_ms(5);
                        PORTB.6=0; 
                
                        //Digit 8----------------
                        PORTA = name[7+i];
                        PORTB.7=1;
                        delay_ms(5);
                        PORTB.7=0;
                        
                     
                    } 
            }
          }
        }
        
        if(PINC.2==0){
            while(1){
              s3:
              if(flag3==1){
                 flag3=0; 
                 break;
              }
              for(k=0;k<3;k++){
                        if(PINC.0==0 || PINC.1==0){
                         flag3=1;
                         goto s3;
                        }
                        //Digit 1----------------
                        PORTA = name[0+i];
                        PORTB.0=1;
                        delay_ms(5);
                        PORTB.0=0;
                
                        //Digit 2----------------
                        PORTA = name[1+i];
                        PORTB.1=1;
                        delay_ms(5);
                        PORTB.1=0;
                
                        //Digit 3----------------
                        PORTA = name[2+i];
                        PORTB.2=1;
                        delay_ms(5);
                        PORTB.2=0; 
                
                        //Digit 4----------------
                        PORTA = name[3+i];
                        PORTB.3=1;
                        delay_ms(5);
                        PORTB.3=0; 
                    
                        //Digit 5----------------
                        PORTA = name[4+i];
                        PORTB.4=1;
                        delay_ms(5);
                        PORTB.4=0;
                
                        //Digit 6----------------
                        PORTA = name[5+i];
                        PORTB.5=1;
                        delay_ms(5);
                        PORTB.5=0;
                
                        //Digit 7----------------
                        PORTA = name[6+i];
                        PORTB.6=1;
                        delay_ms(5);
                        PORTB.6=0; 
                
                        //Digit 8----------------
                        PORTA = name[7+i];
                        PORTB.7=1;
                        delay_ms(5);
                        PORTB.7=0;
              }
            }
        }
    }               
}
