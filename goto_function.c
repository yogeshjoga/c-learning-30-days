#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void main(){
    int age;
    
    minor:
       printf("You are the below 18 age that why you are the miner :\n");
    major:
        printf("You are the above the 18+ that why your the major :\n");
    printf("Enter your AGE :");
    scanf("%d", &age);
    if (age >= 18)
        goto minor;
    else
        goto major;
      //  return 0; 
}


// i am not able to understand  goto statement i want to learn 
// who will guide's to me as a friend!
// thank you