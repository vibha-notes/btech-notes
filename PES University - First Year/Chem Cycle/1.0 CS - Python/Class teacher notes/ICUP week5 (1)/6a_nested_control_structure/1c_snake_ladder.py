# snake ladder problem
# version 3
# Generate all rows; repeat the earlier code 5 times.
n = 100
for j in range(5) :
	for i in range(n, n - 10, -1):
		print("{0:3}".format(i), end = " ")
	print()
	n -= 20
	for i in range(n, n + 10) :
		print("{0:3}".format(i + 1), end = " ")
	print()
