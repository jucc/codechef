/**
Juliana Cavalcanti
Testcases for challenge by topcoder: https://community.topcoder.com/stat?c=problem_statement&pm=4823
**/

#include <iostream>
#include <assert.h>
#include "unionOfIntervals.h"

using namespace std;

int main() {
    UnionOfIntervals test;

    vector<int> lowerBound = { 1, 5 };
    vector<int> upperBound = { 3, 7 };
    int n = 4;
    int expected = 6;
    assert ( test.nthElement ( lowerBound, upperBound, n ) == expected );
    cout << "Test 1 OK\n";

    lowerBound = { 1, 3 };
    upperBound = { 4, 5 };
    n = 3;
    expected = 3;
    assert ( test.nthElement ( lowerBound, upperBound, n ) == expected );
    cout << "Test 2 OK\n";

    lowerBound = { -1500000000 };
    upperBound = { 1500000000 };
    n = 1500000091;
    expected = 91;
    assert ( test.nthElement ( lowerBound, upperBound, n ) == expected );
    cout << "Test 3 OK\n";

    lowerBound = { 1, 5, 10, 15 };
    upperBound = { 20, 25, 30, 35 };
    n = 16;
    expected = 10;
    assert ( test.nthElement ( lowerBound, upperBound, n ) == expected );
    cout << "Test 4 OK\n";
}
