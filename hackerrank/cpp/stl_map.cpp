/**
Juliana Cavalcanti
Challenge by hackerrank: https://www.hackerrank.com/challenges/cpp-maps
**/


#include <iostream>
#include <map>
using namespace std;

int main() {
    int q;
    cin >> q;

    map<string, int> marks;
    while (q--) {
        string name;
        int mark, qType;
        cin >> qType >> name;
        switch(qType) {
            case 1: {
                cin >> mark;
                auto stored = marks.find(name);
                if (stored == marks.end()) {
                    marks.insert(make_pair(name, mark));
                }
                else {
                    stored->second += mark;
                }
                break;
            }
            case 2: marks.erase(name); break;
            case 3: {
                auto val = marks.find(name);
                cout << ( val == marks.end() ? 0 : val->second ) << endl;
            }
        }
    }
    return 0;
}
