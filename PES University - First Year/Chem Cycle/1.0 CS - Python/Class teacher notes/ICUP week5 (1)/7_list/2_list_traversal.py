# file: 2_list_traversal.py
# find the leftmost even number if any
found = False
# select one of these lists; comment the other
#a = [11, 33, 22, 55, 44]
a = [11, 33, 55, 77]
i = 0
while not found and (i < len(a)) :
	if a[i] % 2 == 0:
		found = True
	else:
		i += 1
if found :
	print("found an even number : ", a[i])
else:
	print("no even number found")

