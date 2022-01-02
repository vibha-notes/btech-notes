# Generate the following pattern for n = 4
# 1 2 3 4 10
n = int(input("enter an integer : "))
s = 0
for i in range(1, n + 1):
	s += i
	print("{0:3}".format(i), end = " ")
print("{0:4}".format(s))


