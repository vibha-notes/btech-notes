#Print all factors of a given natural number

import math

#A Naive Solution would be to iterate all the numbers from 1 to n,
#checking if that number divides n and printing it.

n=int(input("enter a natural number"))
i=1
while i<=n:
    if n%i==0:
        print(i, end=" ")
    i+=1
print()


#Can we improve the above solution?
#If we look carefully, all the divisors are present in pairs.
#For example if n = 100, then the various pairs of divisors are:
#    (1,100), (2,50), (4,25), (5,20), (10,10)

#Using this fact we could speed up our program significantly.
#We, however have to careful if there are two equal divisors
#as in case of (10, 10). In such case we’d print only one of them.

n=int(input("enter a natural number"))
i=1
while i<=math.sqrt(n):
    if n%i==0:
        if n//i==i:
            print(i,end= " ")
        else:
            print(i, n//i, end=" ")
    i+=1
print()


#version1: Russian Peasants Multiplication 
m=int(input("enter an integer"))
n=int(input("enter another integer"))
res=0
while m>0:
    if m%2==1:
        res+=n
    m=m//2
    n=n*2
print(res)

#version2: Russian Peasants Multiplication 
m=int(input("enter an integer"))
n=int(input("enter another integer"))
res=0
while m>0:
    if m%2==1:
        res+=n
    m=m>>1  #shifts the bit in binary m to the left by 1 == m//2
    n=n<<1  #shifts the bit in binary n to the right by 1 == n*2
print(res)


#version2: Russian Peasants Multiplication 
m=int(input("enter an integer"))
n=int(input("enter another integer"))
res=0
# While second number doesn't become 1
while m>0:
# If second number becomes odd, add the first number to result    
    if m&1:
        res+=n
# Double the first number and halve the second number
    m=m>>1  #shifts the bit in binary m to the left by 1 == m//2
    n=n<<1  #shifts the bit in binary n to the right by 1 == n*2
print(res)
