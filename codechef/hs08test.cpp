/*
    codechef.com - Practice problem - Easy
    ATM - http://www.codechef.com/problems/HS08TEST
    Language - C++
    Juliana Correa
*/

#include <iostream>
#include <iomanip>

#define TAX 0.5
    
using namespace std;        
int main() {

    int wd;
    float bal;

    cin >> wd >> bal;
    float amount = wd + TAX;
     
    if ( wd % 5 == 0 && amount <= bal )
      bal -= amount;
   
    cout << fixed << setprecision(2) << bal << endl;
        
    return 0;
} 
