//inputs/outputs
#include<stdio.h>

int main(){  // hello
char stg[100];
int I;
printf("Enter your name and your age\n");
scanf("%s %d", &stg, &I);
printf("your name is %s \nyour age is :%d", stg, I);
return 0;
}