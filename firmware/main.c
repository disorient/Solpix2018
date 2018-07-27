// Flash an LED slowly, while in low power mode

#include <ch554.h>
#include <debug.h>

#define GREEN_LED_PIN 5
#define OFFBOARD_LED_PIN 7

SBIT(GREEN_LED, 0x90, GREEN_LED_PIN);
SBIT(OFFBOARD_LED, 0x90, OFFBOARD_LED_PIN);

void main() {
    CfgFsys();

    P1_MOD_OC = P1_MOD_OC & ~(1<<GREEN_LED_PIN);
    P1_DIR_PU = P1_DIR_PU | ~(1<<GREEN_LED_PIN);

    P1_MOD_OC = P1_MOD_OC & ~(1<<OFFBOARD_LED_PIN);
    P1_DIR_PU = P1_DIR_PU | ~(1<<OFFBOARD_LED_PIN);

    GREEN_LED = 0;

    while (1) {
        OFFBOARD_LED = 1;
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
        OFFBOARD_LED = 0;
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
    	mDelaymS(200);
    }
}
