a = input("enter string 1 : ")
b = input("enter string 2 : ")

# version 1
if a == b :
	print("equal")
if a < b :
	print(a , " before ", b)
if a > b :
	print(a, " after ", b)


#version 2
if a == b :
	print("equal")
elif a < b :
	print(a , " before ", b)
# elif : not required here
#elif a > b :
else:
	print(a, " after ", b)
