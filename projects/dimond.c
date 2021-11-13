#include<stdio.h>
#include<stdlib.h>
int main()
{
   // variables
   char str[20];
   int len, place;

   // take input
   printf("Enter a string: ");
   scanf("%[^\n]", str);

   // find length of string
   for(len=0; str[len]!='\0'; len++);
   // actual length is length - 1
   len--;
 
   // outer loop for row
   for(int i=0; i<(2*len+1); i++)
   {
     // find the place
     if(i<len) place = i;
     else place = abs(2*len - i);

     // inner loop for column
     for(int j=0; j<=place; j++)
     printf("%c",str[j]); // print

     printf("\n"); // next line
   }

   return 0;
}