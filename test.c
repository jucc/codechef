/*
    codechef.com - Practice problem - Easy 
    Life, the Universe and Everything  - http://www.codechef.com/problems/TEST
    Language - C  
    Juliana Correa
*/
 
#include <stdio.h>
#define ANSWER 42
 
int main(char **argv) {

    int guess = 0;

    while (scanf ("%d", &guess) && guess != ANSWER) {
        printf ("%d\n", guess);
    }
    return 0;
}
