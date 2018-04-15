
#include "SimpleMath.h"


//function prototype
int AddTwoNumbers(int y, int x);
int IncrementByOne(int x);
int Bigger(int x, int y);



//Implementation
int AddTwoNumbers(int y, int x){
    return x+y;
}


int IncrementByOne(int x){
  int y = AddTwoNumbers(x,1);
  return y;
}


int Bigger(int x, int y){
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}
