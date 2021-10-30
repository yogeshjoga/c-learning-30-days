#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
//Strings and characters Array
int main(){
    char love[20];      // char Array    char is type; love is the name of the array; [20] is the storage size;
    printf("Enter your lover name : ");
    scanf("%s", &love);  // calling string   string is the not data type that y we will add char data type and calling from string
    printf("I love you %s baby", love);  // Array calling
}