#Sum the cosine series, sine series for 

#	a) upto n terms
#  cosine(x) = 1 - x**2/2! + x**4/4! ...


# get x # if necessary, convert to radians
# get n
# sum <- 0
# term <- 1
# for i <- 0 to n - 1 do
#	sum <- sum + term
#	term <- ____
#	incr i
# print sum

x = float(input("Enter angle in radians : "))
n = int(input("enter the # of terms to add : "))
sum = 0.0
term = 1.0
for i in range(0, n) :
	sum += term
	term = -x * x / ((2 * i + 2) * (2 * i + 1)) * term
	i += 1
print(sum)







