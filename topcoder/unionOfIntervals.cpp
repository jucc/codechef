/**
Juliana Cavalcanti
Solution for challenge by topcoder: https://community.topcoder.com/stat?c=problem_statement&pm=4823
**/

#include "unionOfIntervals.h"

int UnionOfIntervals::nthElement( std::vector<int>& lowerBound, std::vector<int>& upperBound, int n ) {

    int intervals = lowerBound.size();

    // first, check for trivial case
    if (intervals == 1) return lowerBound[0] + n;

    // find the overall minimum and maximum
    int hi = -2000000000, lo = 2000000000;
    for ( int i = 0; i < intervals; i++ ) {
        if ( lowerBound[i] < lo ) lo = lowerBound[i];
        if ( upperBound[i] > hi ) hi = upperBound[i];
    }

    while ( hi - lo > 1 ) {

        // break the search space in two and use the value in the middle
        int mid = lo + (hi - lo) / 2;

        // define the first and indices with value "mid" by counting how many elements are below or equal to it
        int beforeMid = 0, exactlyMid = 0;
        for ( int i = 0; i < intervals; i++ ) {
            // mid is contained inside interval i, and elements between its lower bound and mid are counted as below
            if ( lowerBound[i] <= mid && upperBound[i] >= mid ) {
                beforeMid += mid - lowerBound[i];
                exactlyMid++;
            }
            // interval i happens entirely before mid, all elements are counted as below
            else if ( upperBound[i] < mid ) {
                beforeMid += upperBound[i] - lowerBound[i] + 1;
            }
        }

        // if there is no value "mid" in the intervals, the real "mid" is the first lower bound above it
        if (exactlyMid == 0)  {
            mid = adjustMid ( lowerBound, mid );
        }

        // mid is below the nth element, search to the left
        if ( n < beforeMid ) {
            hi = mid;
        // mid is above the nth element, search to the right
        } else if ( n > beforeMid + exactlyMid ) {
            lo = mid;
        // the interval of indices with value mid contains n. Yuppie!
        } else {
            return mid;
        }
    }
}


int UnionOfIntervals::adjustMid ( std::vector<int>& lowerBound, int mid ){
    int newMid = 2000000000;
    for ( int& i : lowerBound ) {
        if ( i > mid && i < newMid ) {
            newMid = i;
        }
    }
    return newMid;
}
