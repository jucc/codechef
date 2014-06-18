"""
    codechef.com - Practice problem - Easy
    Enormous input test - http://www.codechef.com/problems/INTEST
    Language - Python
    Juliana Correa
"""

n, k = map(lambda x: int(x), raw_input().split())
print n, k
i = div = x = 0
while i < n:
   x = int(raw_input())
   if x % k == 0:
      div += 1
   i += 1
print div
