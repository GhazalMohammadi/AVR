#include <mega32.h>
#include <delay.h>

void main(void){
    DDRA = 0xff ;
    s1:
    PORTA = 0b00001111;
    delay_ms(500);
    PORTA = 0b11110000;
    delay_ms(500);
    goto s1 ;

}
