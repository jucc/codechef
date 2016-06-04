/*
    codechef.com - Practice problem - Easy
    Enormous input test - http://www.codechef.com/problems/INTEST
    Language - C
    Juliana Correa
*/

#include <stdio.h>
    
int main(int argc, char **argv) 
{
   int n, k, x, i, divs;
   divs = 0;
   scanf("%d", &n);
   scanf("%d", &k);
    
   for (i = 0; i < n; i++)
   {
      scanf("%d", &x);
      if (!(x % k)) divs++;
   }      
   
   printf("%d\n", divs);
   return 0;
} 
