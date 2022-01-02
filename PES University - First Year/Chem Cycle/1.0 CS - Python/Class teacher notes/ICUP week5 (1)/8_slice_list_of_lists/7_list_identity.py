# file : 7_list_identity.py
# version 3
n = 4
a = []
for i in range(1, n + 1) :
	a.append([])
	for j in range(1, n + 1) :
		a[i-1].append(0)
	a[i - 1][i - 1] = 1


for x in a :
	for e in x :
		print(e, end = " ")
	print()










