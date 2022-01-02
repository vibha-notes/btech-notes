#Sum the cosine series, sine series for 

#	b) until the term becomes less than 0.0001.
#  cosine(x) = 1 - x**2/2! + x**4/4! ...


# get x # if necessary, convert to radians
# sum <- 0
# term <- 1
# i = 0
# while abs(term) >= 0.0001 do
#	sum <- sum + term
#	term <- ____
#	incr i
# print sum

x = float(input("Enter angle in radians : "))
sum = 0.0
term = 1.0
i = 0
while abs(term) >= 0.0001 :
	sum += term
	term = -x * x / ((2 * i + 2) * (2 * i + 1)) * term
	i += 1
print(sum)







