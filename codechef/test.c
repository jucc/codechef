/*
    codechef.com - Practice problem - Easy 
    Life, the Universe and Everything  - http://www.codechef.com/problems/TEST
    Language - C  
    Juliana Correa
*/
 
#include <stdio.h>
#define ANSWER 42
 
void main() {

    int guess;

    while (scanf ("%d", &guess) && guess != ANSWER) 
        printf ("%d\n", guess);
}
