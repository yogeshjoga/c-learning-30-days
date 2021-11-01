#include <stdio.h>
 
int main () {

   int n[ 100 ]; /* n is an array of 10 integers */
   int i,j;
 
   /* initialize elements of array n to 0 */         
   for ( i = 0; i < 100; i++ ) {
      n[ i ] = i + 100; /* set element at location i to i + 1000 */
   }
   
   /* output each array element's value */
   for (j = 0; j < 100; j++ ) {
      printf("Element[%d] = %d\n", j, n[j] );
   }
 
   return 0;
}