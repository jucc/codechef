/**
Juliana Cavalcanti
Challenge by hackerrank: https://www.hackerrank.com/challenges/c-class-templates
**/

#include <iostream>
using namespace std;

template <class T> class AddElements {
    T _el1;
public:
    AddElements( T el1 ) { _el1 = el1; }
    T add ( T el2 ) { return _el1 + el2; }
    T concatenate ( T el2 ) { return _el1 + el2; }
};

int main () {
    int n;
    cin >> n;
    while (n--) {
        string type;
        cin >> type;
        if(type=="float") {
            double element1,element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat (element1);
            cout << myfloat.add(element2) << endl;
        }
        else if(type == "int") {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint (element1);
            cout << myint.add(element2) << endl;
        }
        else if(type == "string") {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring (element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}
