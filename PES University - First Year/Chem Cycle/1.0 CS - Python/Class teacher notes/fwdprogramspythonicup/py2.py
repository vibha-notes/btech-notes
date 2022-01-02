import sys

#variables in python
#no declaration of variables required in Python
#If there is need of a variable, you think of a name
#and start using it as a variable.


n1=10               #var n1 is tagged / points to 10 in memory 
print(n1)           
print(type(n1))     #class <int>
print(id(n1))      #address in dec format 
print(hex(id(n1)))  #address if n1 in hex format

#remarkable aspect of variable in python: Not only the value
#of a variable may change during program execution but the type as well

n1=n1+1         #changes value to 11
print(type(n1))
print(id(n1))

n1=n1+1.42      #changes value and type
print(type(n1))
print(id(n1)) 

n1="hello"      #changes value and type
print(type(n1))
print(id(n1))

# the type of a variable can change during the execution of a script.
# to be precise: A new object, which can be of any type, will be assigned to it.
#We illustrate this in our following example:

i = 42			# data type is implicitly set to integer
i = 42 + 0.11		# data type is changed to float
i = "forty"		# and now it will be a string

#Python automatically takes care of the physical representation for the
#different data types, i.e. an integer values will be stored in a different
#memory location than a float or a string

# Python variables are references to objects, but the actual data is contained in the objects


#print("sep : =", sep)       #sep is not defined NAME Err 
print()

sep="pqr"
print("lmn",sep, sep='o')   #first sep is var and second one is a keyword parameter of print()

sep="abc"              #var sep is pointing to 10
print(20,30)        
print(20,30,sep=sep)   #content of var sep used as seperator  
print(sep)              #printing var sep



#Type hints in Python 3.6 and above
#Python 3.6 introduced a syntax for annotating variables in PEP 526
# This is how you declare the type of a variable type in Python 3.6
age: int = 1

# In Python 3.5 and earlier you can use a type comment instead
# (equivalent to the previous definition)
age = 1  # type: int

# You don't need to initialize a variable to annotate it
a: int  # Ok (no value at runtime until assigned) 

n1:int="a"
n2:int=10
print(n1)
#n3=n1+n2
#print(n3)


#Integer interning in python / caching


'''NOTE 1
>>> id(256)
140717649884160
>>> id(255)
140717649884128
>>> id(254)
140717649884096
>>> id(253)
140717649884064
>>> id(252)
140717649884032
'''

''' NOTE 2
>>> id(256)
140717649884160
>>> id(256)
140717649884160
>>> id(257)
2742890291152
>>> id(257)
2742890290544
>>> id(257)
2742890291024
>>> id(257)
2742890291152
>>> id(257)
2742890290544
>>> id(257)
2742890291024
>>> id(257)
2742890291152
>>> id(256)
140717649884160
'''

''' NOTE 3
>>> 256 is 256
True
>>> 257 is 257
True
'''

#NOTE 1: The current implementation keeps an array of integer objects for all integers
#between -5 and 256, when you create an int in that range you actually just get
#back a reference to the existing object.

#NOTE 2: everything in Python is an object. In particular, integers are also objects
#every time a Python coder uses an integer, Python has to create the object.
#However, in order to speed things up and save coders from the process of constantly creating
#numbers, what should be noted is that commonly used integers between -5 and 256 are cached in
#Python. Thus, every time a Python programmer asks for a number such as 5, Python already has
#the object and uses it every time the number 5 is called.
#In other words, the integers between -5 and 256 are singletons, which means they are always
#the same single object and there is only one copy of each number.

#Note 3: Python will execute this interactive statement:
#>>> 257 is 257
#as a single block.
#During complilation of this statement, CPython will see that you have two matching literals
#and will use the same object representing 257.

n1=20
n2=20
print(n1==n2)           #True 
print(n1 is n2)         #True
print(id(n1), id(n2))   # same   --> Integer interning

n1=20
n2=n1
print(n1==n2)           #True 
print(n1 is n2)         #True
print(id(n1), id(n2))   #same   --> Assignment of n1 to n2 i.e. object assignment  



n1=500
n2=n1
print(n1==n2)           #True
print(n1 is n2)         #True
print(id(n1), id(n2))   # same   --> Not interning but optimization of compiler

#Identity is not the same thing as equality
#Do not use IS to compare integers.

n1=500
n2=500
print(n1==n2)           #True
print(n1 is n2)         #True
print(id(n1), id(n2))   # same   --> Not interning but optimization of compiler


#Python is allowed to merge any two immutable values, and pre-created small int values
#are not the only way this can happen. A Python implementation is never guaranteed to do this,
#but they all do it for more than just small ints.
#There are some other pre-created values, such as the empty tuple, str, and bytes,
#and some short strings (in CPython 3.6, it's the 256 single-character Latin-1 strings). For 
'''
>>> a = ()
>>> b = ()
>>> a is b
True
'''

#even non-pre-created values can be identical. 
'''

>>> c = 257
>>> d = 257
>>> c is d
False
>>> e, f = 258, 258
>>> e is f
True

'''

#And this isn't limited to int values:
'''
>>> g, h = 42.23e100, 42.23e100
>>> g is h
True
'''

'''
Obviously, CPython doesn't come with a pre-created float value for 42.23e100.
So, what's going on here?
The CPython compiler will merge constant values of some known-immutable types like
int, float, str, bytes, in the same compilation unit.
For a module, the whole module is a compilation unit, but at the interactive interpreter,
each statement is a separate compilation unit. Since c and d are defined in separate
statements, their values aren't merged. Since e and f are defined in the same statement,
their values are merged.
'''


#References
'''
https://www.codementor.io/mjpieters/python-optimization-how-it-can-make-you-a-better-programmer-ajiiftqbo
http://guilload.com/python-string-interning/
'''
