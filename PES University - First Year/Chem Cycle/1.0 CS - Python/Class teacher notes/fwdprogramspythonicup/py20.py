#Data types in python 

#Numeric types:
#int: Integers; equivalent to C longs in Python 2.x, non-limited length in Python 3.x

# positive number
number = 25

# negative number
negative_number = -23

#Zero 
zero = 0

#number = 100000000000000000000000
print(type(number))


#long: Long integers of non-limited length; exists only in Python 2.x

#float: Floating-Point numbers, equivalent to C doubles
decimal_number = 25.33
decimal_number_two = 45.2424

#complex: Complex Numbers



Sequences:
str: String; represented as a sequence of 8-bit characters in Python 2.x, but as a sequence of Unicode characters (in the range of U+0000 - U+10FFFF) in Python 3.x
bytes: a sequence of integers in the range of 0-255; only available in Python 3.x
byte array: like bytes, but mutable (see below); only available in Python 3.x
list
tuple


Sets:
set: an unordered collection of unique objects; available as a standard type since Python 2.6
frozen set: like set, but immutable (see below); available as a standard type since Python 2.6

Mappings:
dict: Python dictionaries, also called hashmaps or associative arrays, which means that
an element of the list is associated with a definition. 


boolean: the type of the built-in values True and False.
Useful in conditional expressions, and anywhere else you want to represent the
truth or falsity of some condition. Mostly interchangeable with the integers 1 and 0.
In fact, conditional expressions will accept values of any type, treating special ones
like boolean False, integer 0 and the empty string "" as equivalent to False, and all other
values as equivalent to True. But for safety’s sake, it is best to only use boolean values in
these places.


None type
'''


