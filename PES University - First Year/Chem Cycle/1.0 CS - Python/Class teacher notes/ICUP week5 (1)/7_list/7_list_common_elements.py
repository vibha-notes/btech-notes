# file : 7_list_common_elements.py
# find common elements
a = [11, 33, 22, 44, 55]
b = [33, 60, 11, 70, 80, 44]
res = []
# walk through the first list
for i in a :
	# check whether that element also occurs in the second list
	if i in b :
		res.append(i)
for elem in res :
	print(elem, end = " ")
print()

