/*
    codechef.com - Practice problem - Easy
    Enormous input test - http://www.codechef.com/problems/INTEST
    Language - C++
    Juliana Correa
*/

#include <iostream>
    
using namespace std;        
int main() {

   int n, k, x, divs = 0;
   cin >> n >> k;
    
   for (int i=0; i < n; i++) 
   {
      cin >> x;
      if (!(x%k)) divs++;
   }      
   
   cout << divs << endl;    
   return 0;
} 
