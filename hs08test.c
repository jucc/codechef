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
    float amount = wd + TAX;
     
    if ((wd % 5 == 0) && (amount <= bal))
        bal -= amount;
    
    printf ("%.02f\n", bal);

    return 0;
} 
