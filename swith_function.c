#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void main(){
    int a; // assine the integer value
    printf("Enter a value in btwen 1 to 5 :"); // taken from the an value
    scanf("%d", &a); // input taken from user

    // start

    switch (a) {   //start the swith case function and apply the conditation

        case 1:  // case one 
        printf("Your are entered one"); // print the output value from case 1
        break; // break statement it's block terminated 
        
        case 2:
        printf("Your are enteredf two");
        break;

        case 3:
        printf("Your are entered three");
        break;

        case 4:
        printf("Your are entered four");
        break;

        case 5:
        printf("Your are enterdf five");
        break;

        default:
        printf("Your are enter 0 or above the 5");
        break;
    }
}

// clean code is the best to learning 
// keep comments 
// learn like a king 
// code like a master
// live lika a ledgend
// thank you im yogesh bye bye
