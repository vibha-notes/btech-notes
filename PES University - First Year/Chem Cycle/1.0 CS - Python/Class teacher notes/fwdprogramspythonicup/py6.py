#Assignments Statement
    #Assignment is fundamental to Python;
    #it is how the objects created by an expression are preserved.

#variable=expression
num1=10

#Augmented Assignment
    #Any of the usual arithmetic operations can be combined with
    #assignment to create an augmented assignment statement.

num1+=10    #This statement is a shorthand for num1=num1+10

num2=20
num2*=num1

#Multiple Assignment 
    #The assignment satement also copes nicely with assigning multiple variables at one time.
    #The left and right side must have the same number of elements.

# Compute line between two points
x1,y1 = 2,3 # point one
x2,y2 = 6,8 # point two
m,b = (y1-y2)/(x1-x2), y1-(y1-y2)/(x1-x2)*x1
print("y=",m,"*x+",b)


#Swapping two vars using MA 

    #The basic rule is that Python evaluates the entire right-hand side of the = statement.
    #Then it matches values with destinations on the left-hand side.
    #If the lists are different lengths, an exception is raised and the program stops.
    #Because of the complete evaluation of the right-hand side, the following construct works
    #nicely to swap to variables. This is often quite a bit more complicated in other languages.
print(" ")
a,b = 1,4
print(a,b)
b,a = a,b
print(a,b)

#Multiple assignment is very strict
#a,b=1          #TypeError: cannot unpack non-iterable int object
#a,b=1,         #ValueError: not enough values to unpack (expected 2, got 1)
a,b=1,None      #works fine



#Tricky Assignment

    #One of the cooler programming shortcuts in Python is using sequences to
    #assign multiple values at once.

nums=(1,2,3,4)
(n1,n2,n3,n4)=nums
print(n1,n2,n3,n4)


#Parenthesis are optional around tuples in Python and
#they’re also optional in multiple assignment (which uses a tuple-like syntax).
#All of these are equivalent:
x, y = 10, 20
x, y = (10, 20)
(x, y) = 10, 20
(x, y) = (10, 20)

#multiple assignment possible with any container / type
x, y = [10, 20]
print(x,y)

x, y = 'hi'
print(x,y)

x, y = 'hi',"hello"
print(x,y)

x, y = [10, 20], [30, 40]
print(x,y)

#In Python 3.0, the * operator was added to the multiple assignment syntax,
#allowing us to capture remaining items after an unpacking into a list:
nums=1,2,3,4,5
first,*rest=nums
print(first)
print(rest)

#Shallow vs Deep Multiple Assignemt
#the following multiple assignment is shallow because it unpacks one level deep
color, point = ("red", (1, 2, 3))

#this multiple assignment is deep because it unpacks the previous point tuple
#further into x, y, and z variables

color, (x, y, z) = ("red", (1, 2, 3))


#Evlaution Order in Multiple Assignment

#In an assignment statement, the right-hand side is always evaluated fully
#before doing the actual setting of variables. So,

#First way
X=1
y=2
x,y=y,x+y
print(x,y)      #2, 3

#Second way
X=1
y=2
x=y
y=x+y
print(x,y)      #2, 4

# In the first way :  x, y = y, x + y
#evaluates y (let's call the result ham),
#evaluates x + y (call that spam),
#then sets x to ham and y to spam

#ham = y
#spam = x + y
#x = ham
#y = spam

# In the second way :

#x = y
#y = x + y
#sets x to y, then sets y to x (which == y) plus y



#Multiple targets are not directly supported:
#x,y,z=0
x=y=z=0

x=y=z=1,2,3
print(x,y,z)

x=1
y=2
x=y=z=y,x+y,x

print(x,y,z)






