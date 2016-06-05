/**
Juliana Cavalcanti
Challenge by hackerrank: https://www.hackerrank.com/challenges/diagonal-difference
**/

#include <cmath>
#include <iostream>
using namespace std;

int main(){
    int n, v;
    cin >> n;
    int sum_main = 0, sum_second = 0;
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < n; j++ ) {
            cin >> v;
            if ( i == j ) sum_main += v;
            if ( i + j == n - 1 ) sum_second += v;
        }
    }
    cout << abs(sum_main - sum_second);
    return 0;
}
