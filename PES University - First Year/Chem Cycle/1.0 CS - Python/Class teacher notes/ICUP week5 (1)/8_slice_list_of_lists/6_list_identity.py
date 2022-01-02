# file : 6_list_identity.py
# version 2
n = 4
a = []
for i in range(1, n + 1) :
	a.append([])
	for j in range(1, n + 1) :
		if i == j :
			a[i-1].append(1)
		else:
			a[i-1].append(0)


for x in a :
	for e in x :
		print(e, end = " ")
	print()










