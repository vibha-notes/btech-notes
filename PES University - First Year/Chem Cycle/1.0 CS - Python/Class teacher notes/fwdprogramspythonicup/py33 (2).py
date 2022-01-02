#Tuples

from collections import namedtuple

#Creation - empty tuple
# approach - 1
t = ()
print(type(t))
# approach - 2
t1 = tuple()
print(type(t1))

#Tuple of empty tuple
t2 = (())
print(type(t2))
t3 = ((),)
print(type(t3))
t4 = (tuple())
print(type(t4))
t5 = (tuple(),)
print(type(t5))

'''
Assume you have n bags with m items.
To represent a list of items in a bag, I use a tuple of length n where each
element of that tuple is a representative for a bag.
A bag might be empty, which is labeled by ().
Now, at some initial point, I have just one bag with empty items!
'''

print(tuple(tuple()))
print(tuple(tuple(tuple())))
print(tuple([]))
print(tuple(tuple([])))

#Tuple of one ele / item
t6 = (1,)
print(type(t6))
t7 = (1)
print(type(t7))     #int not tuple
'''
Tuples are constructed by the comma operator (not within square brackets),
with or without enclosing parentheses, but an empty tuple must have the
enclosing parentheses.
A single item tuple must have a trailing comma, such as (d,).
'''

#A tuple consists of a number of values separated by commas, for instance:
t8 = 12345, 54321, 'hello!'
print(type(t8))

# Tuples may be nested
t9 = t8, (1,2,3,4,5)
print(type(t9))
print(t9)


'''on output tuples are always enclosed in parentheses, so that nested tuples
are interpreted correctly; they may be input with or without surrounding
parentheses, although often parentheses are necessary anyway (if the tuple is
part of a larger expression).
'''

#It is not possible to assign to the individual items of a tuple
#t8[0] = 88888  #TypeError: 'tuple' object does not support item assignment


#However it is possible to create tuples which contain mutable objects,
#such as lists.
t10 = ([1, 2, 3], [3, 2, 1])
print(type(t10))
print(type(t10[0]))


# Although we say that single-element tuples need a trailing comma, but it's
# optional for multiple-element tuples. Some times trailing comma are handy for
# multiple-element tuples also.

print(('x','y')*4 )
#prints ('x', 'y', 'x', 'y', 'x', 'y', 'x', 'y')

print((('x','y'))*4 )
#also prints ('x', 'y', 'x', 'y', 'x', 'y', 'x', 'y')
# Here the outer parentheses are nothing more than grouping parentheses.

#To make them tuple you need to add a trailing comma. i.e.
print((('x','y'),)*4 )
#prints (('x', 'y'), ('x', 'y'), ('x', 'y'), ('x', 'y'))

print(((),)*5)
#((), (), (), (), ())

#acessing ele / item
t11 = ("PES", "PESIT", "PESU")
print(t11[2])
print(t11[-2])  
#print(t11[-4])      #IndexError: tuple index out of range

#Existence of ele
print("PESU" in t11)
print("pesit" in t11)
print("pesit" not in t11)

#identity and equality of tuples
t12 = (1,2,[3,4],['r','t'],'pesu')
t13 = t12
print(t12 is t13)
print(t12 == t13)

#mutable and immutable members of immutable object
t12[2][1]=33
print(t12)
#t12[4][1]='E'       #TypeError: 'str' object does not support item assignment

t13 = (1,2,[3,4],['r','t'],'pesu', (1,2,3,4))
#t13[5][1]=33        #TypeError: 'tuple' object does not support item assignment


t13 = (1,2,[3,4],['r','t'],'pesu', (1,[2,3],4))
t13[5][1][1]=33  
print(t13)


#Tuples support operations but not methods.
#slicing
t13 = (1,2,[3,4],['r','t'],'pesu', (1,[2,3],4))
print(t13[1:3])
print(t13[-5:-1])

#indexing
print(t13[-2])
print(t13[5])

#comparision
'''
A comparison operator in Python can work with tuples.

The comparison starts with a first element of each tuple.
If they do not compare to =,< or > then it proceed to the second element and so on.

It starts with comparing the first element from each of the tuples
'''

n1=(5,6)
n2=(1,4)
if(n1>n2):print("n1")
else: print("n2")

n1=(5,6)
n2=(5,4)
if(n1>n2):print("n1")
else: print("n2")

n1=(5,6)
n2=(5,7)
if(n1>n2):print("n1")
else: print("n2")


#packing and unpacking

#tuple packing
data = ("Elena", "nhoj546", "Mon, 7 Nov 2016 08:16:56 GMT", "elena@linuxnix.com", ("172.217.22.110", "http", "142.113.71.12"))

#tuple unpacking
username, passwd, last_login, email, connection_details = data
print(username)
print(passwd)
print(last_login)
print(email)
print(connection_details)

#WRAPPING SEVERAL VALUES INTO A LIST WHILE UNPACKING
data = ("Elena", "nhoj546", "Mon, 7 Nov 2016 08:16:56 GMT", "elena@linuxnix.com", ("172.217.22.110", "http", "142.113.71.12"))

#A) WRAPPING AT THE BEGINNING OF THE ITERABLE
*user_details, date, email, _ = data
#you can assign the elements that you do not need to an underscore (“_”) while unpacking.
#The items assigned to an underscore are dropped
print(user_details)
print(email)
print(date)

#B) WRAPPING AT THE END OF THE ITERABLE
user, passwd, *info = data
print(user)
print(passwd)
print(info)

#C) WRAPPING IN THE MIDDLE OF THE ITERABLE
name, *details, (ip_for, protocol, ip_by) = data
print(ip_for)
print(details)


#other notes on packing and unpakcing 

a = (x, y, z) = 1, 2, 3     #this expression uses both multiple assignment and unpacking.
print(a)
print(x,y,z)


x, *y, z = 1, 2, 3, 4
print(y)


#(a,b),c=1,2,3           #too many values to unpack (expected 2)
*(a,b),c = 1,2,3
print(a,b,c)


*(a,*b),c = 1,2,3,4,5
print(a,b,c)


*(*a,b),c = 1,2,3,4,5
print(a,b,c)


'''
Extra Inputs
https://stackoverflow.com/questions/6967632/unpacking-extended-unpacking-and-nested-extended-unpacking
'''

#print(dir(t13))
print(t13.count(2))
print(t13.index(2))
#help(t13.count)
#help(t13.index)

'''
count(value, /) method of builtins.tuple instance
    Return number of occurrences of value.


index(value, start=0, stop=9223372036854775807, /) method of builtins.tuple instance
    Return first index of value.
    
    Raises ValueError if the value is not present.
'''

#named tuples
#help(namedtuple)

'''
namedtuple(typename, field_names, *, rename=False, defaults=None, module=None)
    Returns a new subclass of tuple with named fields.
    
    >>> Point = namedtuple('Point', ['x', 'y'])
'''

stu=namedtuple('student','fname lname srn')
s1=stu('abc','xyz','pes12018001')
print(s1)

print(s1.fname)
print(s1[0])

#Advantages of tuple over list
'''
1.Iterating through tuple is faster than with list, since tuples are immutable.
2.Tuples that consist of immutable elements can be used as key for dictionary,
   which is not possible with list
3.If you have data that is immutable, implementing it as tuple will guarantee that it
  remains write-protected
'''
