# display all squares less than or equal to a given number
n = int(input("enter an integer : "))
i = 1
sq_i = i * i
while sq_i <= n :
	print("Square of ", i, " is ", sq_i)
	i += 1
	sq_i = i * i
