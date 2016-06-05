#!/bin/python3

## Juliana Cavalcanti
## Challenge by hackerrank: https://www.hackerrank.com/challenges/angry-professor

import sys


t = int(input().strip())
for a0 in range(t):
    k = int(input().strip().split(' ')[1])
    a = [int(a_temp) for a_temp in input().strip().split(' ')]
    if len([x for x in a if x <= 0]) < k:
        print("YES")
    else:
        print ("NO")
