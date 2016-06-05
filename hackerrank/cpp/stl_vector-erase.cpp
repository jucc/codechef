/**
Juliana Cavalcanti
Challenge by hackerrank: https://www.hackerrank.com/challenges/vector-erase
**/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, x, a, b;
    cin >> n;
    vector<int> v(n);
    for (int &el : v) {
        cin >> el;
    }

    // problem constraints ensure that x, a and b are valid vector positions (1:n),
    // so we just add -1 to make them into indices (0:n-1)
    cin >> x >> a >> b;
    v.erase(v.begin()+x-1) ;
    v.erase(v.begin()+a-1, v.begin()+b-1);

    cout << v.size() << endl;
    for (int &el : v) {
        cout << el << " ";
    }
    return 0;
}
