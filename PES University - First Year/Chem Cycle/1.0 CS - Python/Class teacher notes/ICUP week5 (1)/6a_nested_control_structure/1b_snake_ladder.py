# snake ladder problem
# version 2
# Generate the first two rows only
# use variables instead of constants
# adjust the spacing
n = 100
for i in range(n, n - 10, -1):
	print("{0:3}".format(i), end = " ")
print()
n -= 20
for i in range(n, n + 10) :
	print("{0:3}".format(i + 1), end = " ")
print()
