#include <stdio.h>
#include <string.h>
int main()
{
   char s[10];
   gets(s);

   strrev(s);

   printf("Reverse of the string: %s\n", s);

   return 0;
}