# <p align="center"><b>C-Learning-30-Days</b> </p>

# C-learning-30-days
c learning with in 30 days, my self joga yogesh i'm a mechanical guy, im intrested in computers, im already i know some computer lang's but a little bit gap to practice a code, now i'm started again lets start!!

## Installation to C lang IDE + vs code
Use the [vs code]( https://code.visualstudio.com/ ) go to site click the download button start downloding, After download and install the vs code, open the vs code and click on the Extension logo button, click into the search button, search the gcc from microsoft extension download and install.



## This is for beginners 

### Overview of C Language   -------------------------- 1st day

	C Tutorials
	C Introduction
	Limitation of C Programming Language
	History of C Programming
	C Installation

### C Language Fundamentals-----------------------------2nd day

	C Tokens
	C Identifiers
	C Keywords
	C Constants
	C Operators
	C Data Types
	C Variables
	C Type Casting


### Data Input and Output-------------------------------3rd day
	C Program Structure
	C Input and Output (I/O)
	C Format Specifiers





### Decision Control Structures ------------------------4th day
	C Decision Making
	C if Statements
	C if-else Statements
	C Nested if-else Statements
	C else-if Statements
	C goto Statement
	C switch Statement






### Loop Control Structures------------------------------5th day

	C Loops
	C while loops
	C do while loops
	C for loops





### Functions---------------------------------------------6th day

	C functions
	C functions Arguments
	C Library Functions
	C Variable Scope
	C Recursion
	C Storage Classes




### Preprocessors and Header Files--------------------------7th day

	C preprocessors
	C Header Files
	C Custom Header Files




### Arrays and Strings --------------------------------------8th day

	C Arrays
	C strings





### Pointers--------------------------------------------------9th day

	C Pointers
	C Memory Management
	C Dynamic Memory Allocations





### Structure and Union -------------------------------------10th day

	C Structures
	C Unions
	C typedef





### File Handlings  -----------------------------------------11th day

	C File Handling
	C fopen
	C fclose
	C gets
	C puts
	C getc
	C putc
	C getw
	C putw
	C fprintf
	C fscanf
	C feof

### C 99/89 ---------------------------------------------------12th day

	C Commands Line Arguments
	C 99 Features
	C Error Handling
	Bit Fields in C






## code
```c
//write the code 
#include<stdio.h>
int main(){
int a,b,c;
a = 2;
b = 3;
c = a + b;
printf("a+b= %d", c);
}

```

## output
```c
output like 
a+b= 5
```

## VS CODE INTERFACE
<img src="https://github.com/yogeshjoga/c-learning-30-days/blob/master/vs_code_interface.png">


## Set the Terminal in VS code

-Go to the Terminal in main bar, hit it and new terminal select the POWERSHELL,
-Go to the POWERSHELL open as a adim and right click the main bar, navigate the properties.
-uncheck to check the USE LEGACY CONSOLE

## Input/Output

```c
#include<stdio.h>

void main()
{
int a,b,c;
printf("Please enter any two numbers: \n");
scanf("%d %d", &a, &b);
c =  a + b;
printf("The addition of two number is: %d", c);
}

```

## Output of the code

```c
Please enter any two numbers:
10
5
The addition of two number is: 15
```


## Simple function in C language

```c

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

```

## function out put

```c
Adding two numbers by using function : 30
```




## functions

```c
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


```

## function out put

```c
The addition of two numbers is: 15
```

## fucntion type two

```c
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


```
## function out put

```c
The addition of two numbers is: 15

```


<br>

<br>

<p align="center">Made with ❤️ By <a href="https://www.google.com/search?q=yogesh+joga&oq=yogesh+joga&aqs=chrome.0.69i59j0i512j0i10i22i30j69i60l3j69i65.2825j0j7&sourceid=chrome&ie=UTF-8">YOGESH JOGA</a></p>
<p align="center" style="font-size: 8px">CODE <b>C</b> Starting Day 24/10/2021</p>

## Social meda

[Instagram]( https://www.instagram.com/_yogi_joga/ )

[Facebook]( https://www.facebook.com/login/?next=https%3A%2F%2Fwww.facebook.com%2Fprofile.php%3Fid%3D100014890958322 )

[Whatsapp]( https://chatwith.io/s/617ab3d1a9ef6 )

<p align="center" style="font-size: 8px"></p>

   
<img src="https://github.com/yogeshjoga/c-learning-30-days/blob/master/my_photo_git.jpg">