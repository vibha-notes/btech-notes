from math import *
#from sys import *

#help function 

#Input in python

n1=input("Enter an integer")    #str by default 
print(n1,type(n1))

#first alternative: accept as str and tye cast to int
n1=input("Enter an integer")
n1=int(n1)                      
print(n1,type(n1))

#second alternative: accept as int itself
n1=int(input("Enter an integer"))
print(n1,type(n1))


#accept two numbers
n1,n2=(input("Enter two integers").split())
sum_=int(n1)+int(n2)
print(sum_)

#accept two numbers
n1,n2=eval(input("Enter two integers"))
sum_=int(n1)+int(n2)
print(sum_)

#How do I execute a string containing Python code in Python?

#For statements, use exec(string) (Python 2/3) or exec string (Python 2):
help(exec) 
code='print("hello welcome to ICUP")'
exec(code)

code1='n1=5\nn2=10\nprint(f"sum of {n1} and {n2} is",n1+n2)'
exec(code1)

#When you need the value of an expression, use eval(string):
help(eval)
sum_=eval("2+2")
print(sum_)
print(eval('dir()'))

#print_=eval('hello')   #NameError: name 'hello' is not defined
print_=eval('"hello"')
print(print_)


print("hello")
PRINT("hello")





