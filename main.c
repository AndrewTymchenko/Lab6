#include <msp430.h> 
#include "MotorMovement.h"
#include "clkSpeed.h"

/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    setspeed_1MHz();
        initializePWM();

        while(1){
                moveForward();
                __delay_cycles(1500000);
                smallLeft();
                __delay_cycles(500000);
                smallRight();
                __delay_cycles(500000);
                moveBackwards();
                __delay_cycles(1500000);

                moveForward();
                __delay_cycles(1500000);
                largeLeft();
                __delay_cycles(500000);
                largeRight();
                __delay_cycles(500000);
                moveBackwards();
                __delay_cycles(1500000);

    }

	return 0;
}
