
// **** Include libraries here ****
// Standard libraries
#include <stdio.h>
#include <math.h>

//CMPE13 Support Library
#include "BOARD.h"

// Microchip libraries
#include <xc.h>
#include <plib.h>

// User libraries


// **** Set macros and preprocessor directives ****
#include "SimpleMath.h"
// **** Define global, module-level, or external variables here ****
int x, y, z;
// **** Declare function prototypes ****
int Bigger(int x, int y);
//int AddTwoNumbers(int y, int x);
//int IncrementByOne(int x);

#define QX 1.5
#define QY 2.8
#define PX -2.3
#define PY 8.6
#define DX (QX-PX)
#define DY (QY-PY)

int main() {
    BOARD_Init();
    {

        /******************************** Your custom code goes below here *******************************/

       // double mathHypot=hypotf(DX,DY);
        //printf("Hypot returned %f and should return %f\r\n",mathHypot,6.9340);
        
        //double mathAtan2=atan2(QX,QY);
        //printf("Atan2 returned %f and should return %f\r\n",mathAtan2,.4918);
          
         x = Bigger(5, 6);
        printf("The Bigger number is: %d\n", x);
        
         y = AddTwoNumbers(56, 8);
        printf("AddTwoNumbers function result is: %d\n", y);
        
        z = IncrementByOne(7);
        printf("IncrementByOne function result is: %d\n", z);
        
        
        

        /*************************************************************************************************/

        // You can never return from main() in an embedded system (one that lacks an operating system).
        // This will result in the processor restarting, which is almost certainly not what you want!
        while (1);
    }
}


