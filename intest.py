"""
    codechef.com - Practice problem - Easy
    Enormous input test - http://www.codechef.com/problems/INTEST
    Language - Python
    Juliana Correa
"""

from sys import stdin

n, k = map(lambda x: int(x), raw_input().split())
numlist = [int(x) for x in stdin.read().strip().split('\n')]
divs = filter(lambda x: x % k == 0, numlist)
print len(divs)
