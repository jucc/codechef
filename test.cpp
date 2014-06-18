/*
    codechef.com - Practice problem - Easy 
    Life, the Universe and Everything  - http://www.codechef.com/problems/TEST
    Language - C++  
    Juliana Correa
*/
 
#include <iostream>
#define ANSWER 42

using namespace std;
 
int main() {

   int guess;

   while (cin >> guess && guess != ANSWER) 
      cout << guess << endl;

   return 0;
}
