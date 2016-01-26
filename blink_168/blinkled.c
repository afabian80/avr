#include <avr/io.h>
#include <util/delay.h>

int main(void) {
        DDRB |= (1 << PB0);

        while(1) {
                PORTB = 1;
                _delay_ms(20);

                PORTB = 0;
                _delay_ms(10000);
        }

        return 0;
}
