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
    scanf("%d", &guess);

    while (guess != ANSWER) {
        printf ("%d\n", guess);
	scanf ("%d", &guess);
    }
    return 0;
}
