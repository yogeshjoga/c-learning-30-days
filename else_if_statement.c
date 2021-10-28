#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
//if else-if else statements writen in this code
void main(){
    int a,b;
    printf("Enter A value :");  //asking to user as a enter a value in integer
    scanf("%d", &a);   //input value's taken from user
    printf("Enter B value :");    //asking to user as a enter a value in integer
    scanf("%d", &b);  //input value's taken from user
    if( a > b){   //start the if block and assine the condition
        printf("A grater the B"); // condition output 
    }
    else if(a < b){  //else-if block started and given the condition assined
        printf("A lesser the B"); // condition output
    }
    else{     //else output else is not containg the condition block 
        printf("A and B both are same value's"); // else output
    }
}

//thank you dear if any mistakes please ping me i want to learn some more logics in c lang 