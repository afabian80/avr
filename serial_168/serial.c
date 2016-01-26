#include <avr/io.h>
#include <util/delay.h>
#include "USART.h"

int main(void) {
        char serialCharacter;
        //DDRB = 0xff;

        initUSART();
        _delay_ms(1000);
        printString("Initializing!\r\n");

        while(1) {
                //serialCharacter = receiveByte();
                //transmitByte(serialCharacter);
                //PORTB = serialCharacter;
                printString("Hello, World!\r\n");
                _delay_ms(1000);
        }

        return 0;
}
