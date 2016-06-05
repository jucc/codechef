/**
Juliana Cavalcanti
Challenge by hackerrank: https://www.hackerrank.com/challenges/vector-sort
**/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int &el : v) {
        cin >> el;
    }
    sort(v.begin(),v.end());

    for (int &el : v) {
        cout << el << " ";
    }
    return 0;
}
