/*
    codechef.com - Practice problem - Easy
    Enormous input test - http://www.codechef.com/problems/INTEST
    Language - C++
    Juliana Correa
*/

#include <iostream>
    
using namespace std;       
 
int main() {

   // Oh, dear, cin is so much more complicated than I thought!! :S 
   // Without this sync, it gets as fast as C-style input (scanf, fread). More info at:
   // http://www.drdobbs.com/the-standard-librarian-iostreams-and-std/184401305
   // http://codeforces.com/blog/entry/925
   std::ios_base::sync_with_stdio(false);

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
