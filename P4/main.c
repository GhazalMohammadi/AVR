#include <mega32.h>
#include <delay.h>

void main(void){
   int i = 1 ;
   int Base_Value1 = 0b00000011;
   DDRA = 0xff;
   
   s1:
   PORTA = Base_Value1;
   delay_ms(500);
   for(i=1 ; i<=3 ; i++){
       Base_Value1 = (Base_Value1<<2);
       PORTA = Base_Value1 ;
       delay_ms(500);
   }
   Base_Value1 = 0b00000011; 
   goto s1 ;

}