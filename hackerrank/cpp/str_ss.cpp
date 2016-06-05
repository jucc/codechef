/**
Juliana Cavalcanti
Challenge by hackerrank: https://www.hackerrank.com/challenges/c-tutorial-stringstream
**/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;


// altered function to avoid vector copy
vector<int> parseInts(string str, vector<int> &ints) {
    stringstream ss(str);
    int n;
    while(ss >> n) {
        ints.push_back(n);
        char ch;
        ss >> ch;
    }
    return ints;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers;
    parseInts(str, integers);
    for(int &el : integers) {
        cout << el << endl;
    }
    return 0;
}
