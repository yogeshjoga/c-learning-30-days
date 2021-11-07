#include<stdio.h>
#include<math.h>
#include<string.h>
// task is find the average of all the numbers in between 16 and 304 which is divisible by 5
int main(){
    int i;
    for(i=16; i<=304; i++){ // counting the number 16 to 304
        if(i % 5 == 0){  // cheacking the divisible into 5=0;
            printf("\n Divisible by 5 : %d",i); // print which is divisible into 5; print only
        }
    }
}