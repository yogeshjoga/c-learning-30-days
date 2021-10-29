#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
//function
int area (int length, int bearth)    //int mean type of output return, area mean name of the function, (int a, int b) mean set of inputs
{                   // function start
    int total_area;   // 3rd int
    total_area = length * bearth;  //sum of 
    return total_area;   //out return
}
  
    int main(){  
        int l = 20, b = 10;  // taken values
        int total_area = area(l,b);  // funcation calling
        printf("%d", total_area);  // printing
    }