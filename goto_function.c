#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void main(){
    int age;
    
    minor: //user defined funcation 
       printf("You are the below 18 age that why you are the miner :\n");
    major: // user defined functaion
        printf("You are the above the 18+ that why your the major :\n");
    printf("Enter your AGE :"); // asking for user
    scanf("%d", &age); //input taken from user
    if (age >= 18) // if condition 
        goto minor;  // calling the user defined function
    else         // else block
        goto major;  // calling the user defined function
      //  return 0; 
}


// i am not able to understand  goto statement i want to learn 
// who will guide's to me as a friend!
// thank you