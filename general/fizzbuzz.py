#!/usr/bin/env python

def fizzbuzz(n):
	s = ""
	if n % 3 == 0:
		s = s + "fizz"
	if n % 5 == 0:
		s = s + "buzz"	
	return s if s else n


if __name__ == "__main__":
	print [fizzbuzz(x) for x in xrange(1,100)]