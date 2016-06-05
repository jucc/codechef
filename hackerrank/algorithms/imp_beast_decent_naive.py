#!/bin/python

## Juliana Cavalcanti
## Challenge by hackerrank: https://www.hackerrank.com/challenges/sherlock-and-the-beast
## is there a decent with n digits? -> Are there a & b such that 3a + 5b = n ?
## the largest decent number will have as most groups of 5 possible (maximize(a)),
## followed by all groups of 3
## This naive solution is O(n), because it loops on all of n/3 until it finds a
## multiple of 5 or reaches 0. This is bad, mod is cyclic and will keep going through
## the same results, no matter how large n is
## I have implemented a better solution in the file imp_beast_decent.cpp, which is O(1)

import sys

t = int(raw_input().strip())
for a0 in xrange(t):
    n = int(raw_input().strip())

    max_a = n / 3 # starts with the maximum groups of fives in n
    r_a = n % 3

    # removes a group of fives (3 digits) and adds to the remainder, trying to form groups of threes
    while  r_a % 5 != 0 and max_a >= 0 : # remainder is not divisible by 5
        max_a = max_a - 1
        r_a += 3

    if r_a % 5 != 0 :
        print "-1"
    else :
        print max_a * 3 * "5" + r_a * "3"
