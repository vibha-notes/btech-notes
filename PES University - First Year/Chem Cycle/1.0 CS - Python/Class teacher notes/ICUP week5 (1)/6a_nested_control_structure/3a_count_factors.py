# file 3a_count_factors.py
# count the number of factors
n = int(input("enter an integer : "))
c = 0 # count of factors
i = 1
while i * i < n :
	if n % i == 0 :
		c += 2 # think: why 2 and not 1
	i += 1
# to take care of perfect square
if i * i == n :
	c += 1
print(c)



