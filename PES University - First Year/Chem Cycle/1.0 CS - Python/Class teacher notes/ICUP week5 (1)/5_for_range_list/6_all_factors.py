# find all factors of a given number
n = int(input("enter a number : "))
i = 1
while i * i < n :
	if n % i == 0 :
		print(i, n // i, end = " ")
	i += 1
if i * i == n :
	print(i, end = " ")
print()


