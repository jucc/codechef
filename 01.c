/*
		codechef.com - Practice problem - Easy
		01 - Life, the Universe and Everything  
		01 - C  
		Juliana Correa
*/
 
#include <stdio.h>
#define ANSWER 42
 
int main(char **argv) {
		
    int guess = 0;
    scanf("%d\n", &guess);
		
    while (guess != ANSWER) {
        printf ("%d\n", guess);
	scanf ("%d\n", &guess);
    }
    return 0;
}
