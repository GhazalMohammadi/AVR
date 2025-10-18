#include <mega32.h>
#include <delay.h>

void main(void){
    int i = 1 ;
    int base_value = 0b00000001 ;
    DDRA = 0xff ;
    
    s1: 
    PORTA = 0b00000000 ;
    delay_ms(500);
    PORTA = base_value ;
    delay_ms(500);    

    for( i=1 ; i<=7 ; i++){
        base_value = (base_value<<1)+1 ;
        PORTA = base_value ;
        delay_ms(500);
    }
    
    for( i=1 ; i<=7 ; i++){
        base_value = (base_value<<1) ;
        PORTA = base_value ;
        delay_ms(500);        
    }
    base_value = 0b00000001 ; 
    goto s1;
}
