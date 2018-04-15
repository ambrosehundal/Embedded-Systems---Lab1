
/*
 * File:   Part4.c
 * Author: amshunda
 *
 * Created on April 6, 2018, 1:27 PM
 */


#include "xc.h"
#include "BOARD.h"
#include "Oled.h"

void main(void) {
    
    
    BOARD_Init();
    OledInit();
    OledDrawString("Hello\n World!\n \n");
    OledUpdate();
    while(1);
}
