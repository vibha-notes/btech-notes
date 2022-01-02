# file: 5_list_build.py
# create a list of squares of numbers from 1 to n
sq_list = []
n = int(input("enter a number : "))
for i in range(1, n + 1):
	sq_list.append(i * i)
for sq in sq_list:
	print(sq, end = " ")
print()

