# file 3c_count_factors.py
# count the number of factors of numbers from 1 to n; find the highest
n = int(input("enter an integer : "))
max_count = 0
for m in range(1, n + 1):
	c = 0  
	i = 1
	while i * i < m :
		if m % i == 0 :
			c += 2  
		i += 1
	 
	if i * i == m :
		c += 1
	if c > max_count:
		max_count = c
print("max # of factors : ", max_count)



