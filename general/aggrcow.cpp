/**
Juliana Cavalcanti
Challenge by SPOJ: http://www.spoj.com/problems/AGGRCOW/
**/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool isPossibleToSetApart( std::vector<int> &stalls, int cows, int d ) {

    // You can always put a cow in the first position because, if you start in
    // any other position to the right, the 2nd cow will be more distant from
    // the first stall than it is from this one. The same applies to putting
    // a cow in the last stall

    auto stall = stalls.begin();

    while ( cows-->1 ) {
        // minimum stall to put a cow at distance d from the last one
        stall = lower_bound( stall, stalls.end(), *stall + d);
        if ( stall == stalls.end() ) {
            return false;
        }
    }
    return true;
}

int maxMinDistance( std::vector<int> &stalls, int cows ) {

    //stalls must be sorted in order to run binary search
    sort( stalls.begin(), stalls.end() );

    // lo = always the maximum distance already tested to work
    int lo = 1;
    // theoretical maximum is if all stalls are equidistant in the range
    int hi = ( stalls[stalls.size()-1] - stalls[0] + 1 ) / ( cows - 1 );
    // gurantees that hi is the minimum distance already tested to fail
    if ( isPossibleToSetApart(stalls, cows, hi )) {
        return hi;
    }

    while ( hi - lo > 1 ) {

        int mid = lo + ( hi-lo ) / 2;

        if (!isPossibleToSetApart(stalls, cows, mid)) {
            hi = mid;
        } else {
            lo = mid;
        }
    }
    return lo ;
}


int main() {

    std::ios_base::sync_with_stdio(false);
    int t;
    cin >> t;

    while (t--) {

        int c, n;
        cin >> n >> c;
        vector<int> v(n);
        for (int &el : v) {
            cin >> el;
        }

        cout << maxMinDistance( v, c ) << "\n";
    }

    return 0;
}
