# file : 5_list_identity.py
"""
# generates identity matrix
# bad program - depending on integer division
# version 1:
"""
n = 4
a = [] # empty matrix
for i in range(1, n + 1) :
	a.append([]) # add a row each time
	for j in range(1, n + 1) :
		a[i-1].append((i//j) * (j//i))  # trick ?

for x in a :
	for e in x :
		print(e, end = " ")
	print()

python 5_list_identity.py 
1 0 0 0 
0 1 0 0 
0 0 1 0 
0 0 0 1 

 









