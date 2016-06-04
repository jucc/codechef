"""
    codechef.com - Practice problem - Easy
    Enormous input test - http://www.codechef.com/problems/INTEST
    Language - Python
    Juliana Correa
"""

from sys import stdin

n, k = map(lambda x: int(x), raw_input().split())
divs = filter(lambda x: int(x) % k == 0, stdin.read().strip().split('\n'))
print len(divs)
