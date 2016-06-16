/**
Juliana Cavalcanti
Challenge by topcoder: https://community.topcoder.com/stat?c=problem_statement&pm=4823
**/

#ifndef _UOI_H_
#define _UOI_H_

#include <vector>

class UnionOfIntervals {
public:
    int nthElement( std::vector<int>& lowerBound, std::vector<int>& upperBound, int n );
private:
    int adjustMid ( std::vector<int>& lowerBound, int mid );
};

#endif
