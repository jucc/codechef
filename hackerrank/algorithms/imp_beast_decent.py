#!/bin/python

## Juliana Cavalcanti
## Challenge by hackerrank: https://www.hackerrank.com/challenges/sherlock-and-the-beast
## Is there a decent with n digits? -> Are there a & b such that 3a + 5b = n ?
## The largest decent number will have as most groups of 5 possible (maximize(a)),
## followed by all groups of 3
## This solution is O(1), except for printing the output.
## It is based on the cyclic nature of mod(x), which can only have x outcomes.
## I have tried a more naive, O(n) solution first, shown in imp_beast_decent_naive.py

import sys

t = int(raw_input().strip())
for a0 in xrange(t):
    n = int(raw_input().strip())

    # n/3 is the maximum possible g3, and the remainder has only 3 possible outcomes:

    # we can fill everything with groups of fives. Yay!
    if n%3 == 0:
        g5 = 0      # g5 = groups of threes (5 digits)
        g3 = n/3    # g3 = groups of fives (3 digits)

    # with 1 digit left, break 3 groups g3 -> leaves 3*3 + 1 to form 2 groups g5
    elif n%3 == 1:
        g5 = 2
        g3 = (n - 10) / 3

    # with 2 digits left, break 1 group g3 -> leaves 1*3 + 2 to form 1 group g5
    else:
        g5 = 1
        g3 = (n - 5) / 3

    if g3 < 0:
        print "-1"
    else:
        print g3 * 3 * "5" + g5 * 5 * "3"
