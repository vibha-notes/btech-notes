# Generate the following pattern for n = 4
# 1 + 2 + 3 + 4 = 10
n = int(input("enter an integer : "))
s = 1
# take care of 1 before the loop
print("{0:3}".format(1), end = " ")
for i in range(2, n + 1): # do n - 1 times
	s += i
	print(" +", "{0:3}".format(i), end = " ")
print(" =", "{0:3}".format(s))


