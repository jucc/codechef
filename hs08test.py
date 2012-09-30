"""
    codechef.com - Practice problem - Easy
    ATM - http://www.codechef.com/problems/HS08TEST
    Language - Python
    Juliana Correa
"""

wd, bal = map(lambda x: float(x), raw_input().split())

if not wd % 5 and wd + 0.5 <= bal:
    bal -= wd + 0.5
print "%.2f" % bal
