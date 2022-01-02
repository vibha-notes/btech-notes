# file: 4_list_traversal.py
# add 100 to each element of the list
a = [11, 33, 22, 55, 44]
print("before loop : ", a)
for i in range(len(a)) :
	a[i] += 100
print("after loop : ", a)
