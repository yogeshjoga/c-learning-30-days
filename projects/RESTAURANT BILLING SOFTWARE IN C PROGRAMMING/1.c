// let's start the new project by using the c programming language
// let's go....................
// very exiting
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<windows.h>
// function to bill header
void billHeader(char name[60], char date[50]){
    printf("\n\n");
    printf("\t    ADV. Restaurant");
    printf("\n\t  ---------------------");
    printf("\n Date: %s", date);
    printf("\n Invoice To :", name);
    printf("\n");
    printf("-----------------------------------------\n");
    printf("Items \t\t");
    printf("Quantity \t\t");
    printf("\n--------------------------------------------");
    printf("\n\n");
}

void billBody(char item[60], int quantity, float price){
    printf("%s\t\t", item);
    printf("%d\t\t",quantity);
    printf("%.2f\t\t", quantity * price);
    printf("\n");
}


