#operators
    #arithmetic opertaors : +, -, *, /, //, %,**

import math,sys

#arithmetic operators
n1=5
n2=6
print(n1+n2)        
print(n2-n1)
print(n1*n2)


print(n1/n2)        # returns real quotient (true division)
#true division
#This is the default division operation in any Python 3.x release.
#result is always the real floating-point quotient, regardless of operand type.
#to take advantage of true division in 2.2 and newer 2.x releases, either
#start the interpreter with the -Qnew option or import division from __future__.
#from __future__ import division  # 2.2+-only


print(n1//n2)       #integer truncation (floor division)
#floor division 
#always truncates the fraction and rounds it to the next smallest whole number
#toward the left on the number line, regardless of the operands' numeric types.
#Here the division results in the lower integer to the value.
#this operator works starting in 2.2 and does not require the __future__ directive

print(-1//2)        # negatives move left on number line

#Unlike / operator, when the result is negative then // operator rounds the result away
#from zero to the nearest integer.

print(n1%n2)             #modulus op i.e. rem is considered not quotient

print(n1**n2)            #n1^n2 or n1 exp n2




#The IEEE 754 standard dictates how floating point numbers work
#Let x = 10**200
x = 1e200; y = x*x
print(y)

#Use the previous value of y
z=y
z/= y
print(z)

#There are two kinds of exceptional floating point values:infinities and NaNs.
#Infinite values are represented by inf and can be positive or negative.
#A NaN, not a number, is represented by nan. 


#alternate rep
#Although Python floating point numbers are essentially C floating point numbers,
#Python integers are not C integers. Python integers have arbitrary precision,
#and so we can sometimes avoid problems with overflow by working with integers.

x=10**200
y=x*x
print(y)

#We’re OK as long as we keep producing integer results, but we could run into trouble
#if we do anything that produces a non-integer result.

x = 10**200;
y = (x + 0.5)*x             #would cause y to be inf
print(y)            

x = 10**200;
#y = x*x + 0.5           #throw an OverflowError exception.


#What if there are more than one operator in an expression?
#What is the order of evaluation?

res=10*5+9
print(res) 

#If multiplication is performed before addition then the answer will be 59. 
#if addition is performed before multiplication then the answer will be 140.
#To solve this dilemma, Operator Precedence is used.

#Python adheres to the PEMDAS order of operations.
# PEMDAS --> Parentheses, Exponents, Multiplication/Modulo/Division, Addition/Subtraction  (US)
# BEDMAS --> Brackets, Exponents, Division/Multiplication/modulo, Addition/Subtraction. (Canada / NZ)
# BODMAS --> Brackets, Order, Division/Multiplication/Modulo, Addition/Subtraction (IN,UK, AUS, West Africa, Nigeria)
# BIDMAS --> Brackets, Indices, Division/Multiplication/Modulo, Addition/Subtraction. (UK only)

'''
=> 10 * 5 + 9 (multiplication takes place first)
=> 50 + 9 (followed by addition)
=> 59 (Ans)'''

#what if there are more than one operator in an expression of same precedence?
#for example, (*, /, //, %) have the same precedence.

res=5 + 12 / 2 * 4
print(res)

#To determine the order of evaluation when operator precedence is same we use Operator Associativity.
#Operator Associativity defines the direction in which operators of same
#precedence are evaluated, it can be either from left to right or right to left.
#Operators within same group have same associativity.


#The following are two noteworthy points to remember about the precedence table.
#Associativity of most operators in the same group is from left to right except exponentiation(**).
#The associativity of exponentiation operator (**) is from right to left.
# parentheses i.e () can be used to change the order of evaluation. 

'''=> 5 + 12 / 2 * 4  (/ operator is evaluated first)
=> 5 + 6 * 4 (then * operator is evaluated)
=> 5 + 24 (at last + operator is evaluated)
=> 29 (Ans)'''





#ADDITIONAL INFO

#In Python 3.5 and higher, we can also use the defined constants math.inf and math.nan:
pos_inf = math.inf
neg_inf = -math.inf
not_a_num = math.nan
print(pos_inf,neg_inf,not_a_num)

print(sys.float_info.max)               #this is system dependent value
print(pos_inf<sys.float_info.max)

#Arithmetic operations on infinity just give infinite results, or sometimes NaN
print(-5.0 * pos_inf == neg_inf)               #True
print(-5.0 * neg_inf == pos_inf)               #True
print(pos_inf * neg_inf == neg_inf)            #True
print(0.0 * pos_inf)                          #nan
print(0.0 * neg_inf)                           #nan
print(pos_inf / pos_inf)                       #nan


#NaN is never equal to anything, not even itself. We can test for it is with the isnan method:
print(not_a_num == not_a_num)
# Out: False

print(math.isnan(not_a_num))
#Out: True

#NaN always compares as "not equal", but never less than or greater than:

print(not_a_num != 5.0)   # or any random value
# Out: True

print(not_a_num > 5.0   or   not_a_num < 5.0   or   not_a_num == 5.0)
# Out: False

#Arithmetic operations on NaN always give NaN. This includes multiplication by -1: there is no "negative NaN".

print(5.0 * not_a_num)
# Out: nan

#print(float("abc")) #ValueError: could not convert string to float: 'abc'

print(float("nan"))
print(float("NaN"))
print(float("NAN"))

# for inf/infinity
print(float("inf"))
print(float("-inf"))
print(float("InF"))
print(float("InFiNiTy"))
print(float("infinity"))
print(float("INFINITY"))
