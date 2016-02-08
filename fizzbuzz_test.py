import unittest
from fizzbuzz import fizzbuzz


class Test_fizzbuzz(unittest.TestCase):

	def test_fizz(self):
		res = fizzbuzz(42)
		expected = "fizz"
		self.assertEqual(expected, res)


	def test_buzz(self):
		res = fizzbuzz(35)
		expected = "buzz"
		self.assertEqual(expected, res)

	def test_fizzbuzz(self):
		res = fizzbuzz(75)
		expected = "fizzbuzz"
		self.assertEqual(expected, res)

	def test_nozz(self):
		res = fizzbuzz(17)
		expected = 17
		self.assertEqual(expected, res)


if __name__ == '__main__':
	unittest.main()