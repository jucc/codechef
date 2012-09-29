/*
    codechef.com - Practice problem - Easy
    ATM - http://www.codechef.com/problems/HS08TEST
    Language - C
    Juliana Correa
*/

#include <stdio.h>
#define TAX 0.5
     
int main() {

    int wd;
    float bal;
     
    scanf ("%d %f", &wd, &bal);
     
    if ( wd % 5 != 0 || wd + TAX > bal )
        printf ("%.02f\n", bal);
    else
        printf ("%.02f\n", bal - wd - TAX);
        
    return 0;
} 
