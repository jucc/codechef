/**
Juliana Cavalcanti
Challenge by hackerrank: https://www.hackerrank.com/challenges/30-review-loop
**/

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int n;
    cin >> ;
    while (n--) {
        string s;
        stringstream ss;
        cin >> s;
        for (int i = 0; i < s.size(); i ++ ) {
            if (i%2 == 0) {
                cout << s[i];
            }
            else {
                ss << s[i];
            }
        }
        cout << " " << ss.str() << "\n";
    }
    return 0;
}
