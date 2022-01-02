# file : 2_biggest.py
# find the biggest
# algorithm:
# assume the first element in index 0 as the biggest
# walk thro the remaining elements of the list.
# 	compare and update big if necessary.
# output biggest
a = [22, 44, 11, 55, 33]
big = a[0]
for e in a[1:]:  # observe : all elements but for the 0th element
	if e > big :
		big = e
print("biggest : ", big)

$ python 2_biggest.py 
biggest :  55


