#swap two varibles in python without using third / temp var

#version 1: using +, - operators

n1=10
n2=20
print(n1,n2)
n1=n1+n2    #30
n2=n1-n2    #10
n1=n1-n2    #20
print(n1,n2)


#version 2: using *, // operators
n1=10
n2=20
print(n1,n2)
n1=n1*n2
n2=n1//n2       
n1=n1//n2
print(n1,n2)


#version 3: using XOR i.e. ^ operator
#Each bit of the output is the same as the corresponding bit in x
#if that bit in y is 0, and it's the complement of the bit in x
#if that bit in y is 1.
n1=10
n2=20
print(n1,n2)
n1=n1^n2    
n2=n1^n2       
n1=n1^n2
print(n1,n2)




