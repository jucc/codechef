/**
Juliana Cavalcanti
Challenge by hackerrank: https://www.hackerrank.com/challenges/staircase
**/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string line (n, ' ');
    while (n--) {
        line[n] = '#';
        cout << line << endl;
    }
    return 0;
}
