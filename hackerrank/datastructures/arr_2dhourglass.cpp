/**
Juliana Cavalcanti
Challenge by hackerrank: https://www.hackerrank.com/challenges/2d-array
**/

#include <vector>
#include <iostream>

using namespace std;

int main(){

    vector< vector<int> > arr( 6, vector<int>(6) );

    int max = -9 * 7;
    for ( int i = 0; i < 6; i++ ) {
        for ( int j = 0; j < 6; j++ ) {
            cin >> arr[i][j];
            if ( i >= 2 && j >= 2 ) {
                int hourglass = arr[i-2][j-2] + arr[i-2][j-1] + arr[i-2][j]
                                              + arr[i-1][j-1] +
                                arr[i  ][j-2] + arr[i  ][j-1] + arr[i  ][j];
                if ( hourglass > max ) max = hourglass;
            }
        }
    }
    cout << max;
    return 0;
}
