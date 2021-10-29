#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
//function


int a();


int main(){
int  b;
b = a();
printf("Adding two numbers by using function : %d \n", b);
return 0;
}


int a(){
    int a1 = 10, b1 = 20;
    return a1 + b1;
}


#include<stdio.h>

//function declaration
int addition(int num1, int num2);

int main()
{
    //local variable definition
    int answer;
    int num1 = 10;
    int num2 = 5;
    
    //calling a function to get addition value
    answer = addition(num1,num2);

    printf("The addition of two numbers is: %d\n",answer);
    return 0;
}

//function returning the addition of two numbers
int addition(int a,int b)
{
    return a + b;
}


// new function type same

#include<stdio.h>

//function declaration
int addition(int *num1, int *num2);

int main()
{
    //local variable definition
    int answer;
    int num1 = 10;
    int num2 = 5;
    
    //calling a function to get addition value
    answer = addition(&num1,&num2);

    printf("The addition of two numbers is: %d\n",answer);
    return 0;
}

//function returning the addition of two numbers
int addition(int *a,int *b)
{
    return *a + *b;
}




