# file: 3_list_traversal.py
# WRONG; does not work
# add 100 to each element of the list
a = [11, 33, 22, 55, 44]
print("before loop : ", a)
for elem in a :
	elem += 100
print("after loop : ", a)
