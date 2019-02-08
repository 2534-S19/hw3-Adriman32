#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

#define BUTTON2 BIT4

#define LED1 BIT0

#define PRESSED 0

// This function initializes all the peripherals
void initialize();

int main(void)
{

    initialize();

    while (1) {
        // If the button is pressed, turn the LED off
        if ((P1IN & BUTTON2) == PRESSED)
            P1OUT = P1OUT & ~LED1;
        // otherwise, turn the LED off
        else
            P1OUT = P1OUT |  LED1;

    }
}

void initialize()
{

    WDT_A_hold(WDT_A_BASE);

    P1DIR |= LED1;

    P1DIR &= BUTTON2;
    P1REN |= BUTTON2;
    P1OUT |= BUTTON2;
}
