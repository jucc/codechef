/**
Juliana Cavalcanti
Challenge by hackerrank: https://www.hackerrank.com/challenges/cpp-sets
**/

#include <iostream>
#include <set>
using namespace std;


int main() {
    int q;
    cin >> q;
    set<int> s;

    while (q--) {
        int qType, qVal;
        cin >> qType >> qVal;
        switch (qType) {
            case 1: s.insert(qVal); break;
            case 2: s.erase(qVal); break;
            case 3: cout << ( s.find(qVal) == s.end() ? "No\n" : "Yes\n");
        }
    }
    return 0;
}
