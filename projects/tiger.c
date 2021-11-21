#include<stdio.h>
#include<math.h>
#define yogi main
int a,b,c=10; //global variables
void yogesh() { //function decleartion
  for(a=0;a<c;a++){ //for loop started
      for(b=0;b<c;b++){ //nested for loop started
        printf("@ "); // print with space 
      }
      printf(" \n"); // to restart the new line
    }
} //main function started
int yogi(){ //main method decleartion
    yogesh(); //function calling
}
