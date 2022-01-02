#Sum the cosine series, sine series for 
#	a) n terms 
#	b) until the term becomes less than 0.0001.
#  cosine(x) = 1 - x^2/2! + x^4/4! ...

# get n
# get x # if necessary, convert to radians
# sum <- 0
# term <- 1
# for i <- 0 to n - 1 do
#	sum <- sum + term
#	term <- ____
# print sum


n = int(input("enter # of terms : "))
x = float(input("Enter angle in radians : "))
sum = 0.0
term = 1.0
for i in range(0, n) :
	sum += term
	term = -x * x / ((2 * i + 2) * (2 * i + 1)) * term
print(sum)



