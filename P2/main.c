#include <mega32.h>
#include <delay.h>

void main(void){
    int i = 1 ;
    DDRA = 0xff ;
     
    s1:
    PORTA = 0b00000001 ;
    delay_ms(500);
    for(i=1 ; i<=7 ; i++){
        PORTA = (0b00000001<<i) ;
        delay_ms(500);
    }
    goto s1;
}