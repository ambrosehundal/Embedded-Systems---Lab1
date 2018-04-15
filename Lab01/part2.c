// **** Include libraries here ****
// Standard libraries
#include <stdio.h>

//Class specific libraries
#include "BOARD.h"

// Microchip libraries
#include <xc.h>

// User libraries
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    BOARD_Init();
    /***************************************************************************************************
     * Your code goes in between this comment and the following one with asterisks.
     **************************************************************************************************/
    //Declare variables
    float fahr, celsius;
    int lower, upper, step;

    //Initialize variables
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    
    
    //print heading F C
    printf("%5c %5c\n", 'F', 'C'  );
    
    //print out table
    while (fahr <= upper) {
        celsius = (5.0 / 9.0)*(fahr - 32.0);
        printf("%7.1f %04.0f\n", (double) fahr, (double) celsius);
        fahr = fahr + step;
    }
    
    printf("\n");
    
    
    //Kelvin to Fahrenheit conversion table
    
    //print heading K  F
    printf("%5c %5c\n", 'K', 'F'  );
    
    //Declare kelv
    float kelv = lower;
    //print out table
    while (kelv <= upper) {
        fahr = (9.0 / 5.0)*(kelv - 273) + 32.0;
        printf("%03.3f %5.6f\n", (double) kelv, (double) fahr);
        kelv = kelv + step;
    }

    /***************************************************************************************************
     * Your code goes in between this comment and the preceding one with asterisks.
     **************************************************************************************************/

    // Returning from main() is bad form in embedded environments. So we sit and spin.
    while (1);
}
