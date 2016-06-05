/**
Juliana Cavalcanti
Challenge by hackerrank: https://www.hackerrank.com/challenges/cpp-lower-bound
**/

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n, q, y;
    cin >> n;
    vector<int> v(n);
    for (int & el : v)
        cin >> el;

    cin >> q;
    while(q--) {
        cin >> y;
        // lower_bound performs a binary search
        int index = lower_bound(v.begin(), v.end(), y) - v.begin();
        cout << ( (v[index] == y) ?  "Yes " :  "No " );
        // index (0:n-1) + 1 returns the position (1:n)
        cout << index + 1 << endl;
    }

    return 0;
}
