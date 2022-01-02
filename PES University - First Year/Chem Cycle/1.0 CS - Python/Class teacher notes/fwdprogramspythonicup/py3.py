print(id(5))
n1=5
print(id(n1))
n2=n1
print(id(n2))
n3=4+1
print(id(n3))
n4=10/2
print(id(n4))
n5=6-1
print(id(n5))
n6=5*1
print(id(n6))
n7=n6**1
print(id(n7))

#In Python 2.X: By default, division operator will return integer output.
#In Python 3.X: The // operator will be available to request floor division unambiguously.

n8=10//2 
print(id(n8))

n9=10//2.0 
print(id(n9))

#This change is particularly dangerous if you are porting code, or if you
#are executing Python 3 code in Python 2, since the change in integer-division
#behavior can often go unnoticed - it doesn’t raise a SyntaxError

#from __future__ import division in your Python 2.x scripts is recommeded


#The built-in function id() returns the identity of an object as an integer.
#This integer usually corresponds to the object’s location in memory,
#although this is specific to the Python implementation and the platform being used.
#The is operator compares the identity of two objects.

print(n1 is n2)
print(n1 == n2)
n1=5.0
print(n1 is n2)
print(n1 == n2)

n1=1000
n2=1000
print(n1 is n2)
print(n1 == n2)

n1=None
n2=n1
print(n1 is n2)
print(n1 == n2)
print(n1 == None)




