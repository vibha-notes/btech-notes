# file : 8_disp_Pascal.py
a = [
	[1],
	[1, 1],
	[1, 2, 1],
	[1, 3, 3, 1],
	[1, 4, 6, 4, 1],
	[1, 5, 10, 10, 5, 1]
]
n = 5
# display Pascal triangle
#print(a)

for i in range(n + 1) : # go thro n + 1 rows from 0 to n
	# output # of spaces which decreases as we move to the next row - as i increases
	print("   " * (n - i), end = "")
	for j in range(i + 1): # display i + 1 elements
		print("{0:6}".format(a[i][j]), end = "")
	print()
	




