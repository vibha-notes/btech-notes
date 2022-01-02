# wrong program !!
# Generate the following pattern for n = 4
# 1 = 1
# 1 + 2 = 3
# 1 + 2 + 3 = 6
# 1 + 2 + 3 + 4 = 10
m = int(input("enter an integer : "))
s = 1
for n in range(1, m + 1):
	print("{0:3}".format(1), end = " ")
	for i in range(2, n + 1): # do n - 1 times
		s += i
		print(" +", "{0:3}".format(i), end = " ")
	print(" =", "{0:3}".format(s))

