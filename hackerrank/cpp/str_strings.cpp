/**
Juliana Cavalcanti
Challenge by hackerrank: https://www.hackerrank.com/challenges/c-tutorial-strings
**/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    cout << a.size() << " " << b.size() << endl << a + b << endl;
    cout << b.front() << a.substr(1) << " " << a.front() << b.substr(1) << endl;
    // http://www.cplusplus.com/reference/stringstring/substr/
    return 0;
}
