#A string is a sequence of characters.
#In Python 3, all strings are sequences of Unicode characters.

#creating string
#To create a string, enclose it in quotes.
#Python strings can be defined with either single quotes (') or double quotes (").
s="Hello World"
print(s)

#Empty String
s=''  #s=''''''  s=""""""
print(len(s))
s="Hello World"
print(len(s))

#Even triple quotes can be used in Python
#but generally used to represent multiline strings and docstrings.
s='''Hello World'''
print(s)

# triple (single/double) quotes string can extend multiple lines
slong = """Hello, welcome to
           the world of Python"""
print(slong)

#or using ctor
s=str()
print(len(s))

#String Access
#You can access the characters
# one at a time with the subscript / index operator []
s="Hello World"
print(s[1])     #e
print(s[-2])    #l
#print(s[1.5])     #TypeError: index must be int
s1=''
#print(s1[0])      #IndexError : index out of range  


l=len(s)
#last=s[l]
#print(last)     #IndexError : index out of range 


#Traversing or walking through the string

#using while loop
index=0
while index < len(s):
    letter=s[index]
    print(letter)
    index=index+1

#using for loop
for char in s:
    print(char)

for i in range(len(s)):
    print(s[i])


# string slicing
# Once you’ve defined a string, you can get any part of it as a new string.
# This is called slicing the string.
# In otherwords, a substring of a string is obtained by taking a slice.
# Slicing strings works exactly the same as slicing lists

print(s[:4])
print(s[4:])
print(s[2:5])
print(s[2:10:2])
print(s[-10:-3])
print(s[-3:-10:-1])
print(s[-1:-8:-1])
print(s[10:2:-1])

#more on slicing covered here 
#Refer http://bergbom.blogspot.in/2011/04/python-slice-notation.html
#Refer http://www.anarchy46.net/2012/01/python-slice-and-stride-notation.html

#string assignment [aliasing / hardcopy] 
s1=s
print(s1)
print(s)
print(id(s1))
print(id(s))

#using operator + and string literals for concatenation 
print(s1+" Welcome")
print(s1)                       #did not affect as strings are immutable
s5=s1+ " Welcome"
print(s5)
s8='hello' ' world'        #Writing two string literals together also concatenates them like + operator.
print(s8)
s7=('Hello'                 #If we want to concatenate strings in different lines, we can use parentheses.
   ' world')                  
print(s7)
print("\n")

#using operator *
print(s1*2)

#string cloning
s1=s[:]
print(id(s1))
print(id(s))

#string copying
from copy import *
s2=copy(s)
print(id(s2))
print(id(s))
s3=deepcopy(s)
print(id(s3))
print(id(s))

# Note: Since strings are immutable,
# all copy operations return the same string. Probably the reference is increased.
# You don't need to copy a Python string.
# They are immutable, and the copy module always returns the original in such cases,
# as do str(), the whole string slice, and concatenating with an empty string.
# Python deliberately tries to keep just the one copy, as that makes dictionary lookups faster.


# One way you could work around this is to actually create a new string,
# then concatenate space or dot
s4=s+' '
print(s4)
print(id(s4),id(s))

s5=s+'.'
print(s5)
print(id(s5),id(s))

#string comparison
#use ==, <, >, <=, >=, etc
print("string comparison")
print(s1==s)
print(s4==s)
print(s5>s)
print(s4>=s)
print(s2<=s)
print(s1!=s)

s1="hello"
print(s1>="hell")

#Python string comparison is lexicographic:
#From Python Docs: http://docs.python.org/reference/expressions.html
#Strings are compared lexicographically using the numeric equivalents
#(the result of the built-in function ord()) of their characters.
#Unicode and 8-bit strings are fully interoperable in this behavior.
#'abc' < 'bac', 'a' comes before (less-than) 'b' numerically
#(in ASCII and Unicode representations), so the comparison ends right there.

#string membership check / Containment
# can be done using in and not in operators
print("Membership check")
print('h' in s)
print('a' in 'apple')
print('i' in s)
print("hello" in s)
print("le" in "apple")
print("el" in "apple")


#is* methods
#isalpha
print("isalpha()")
s1="abc"
print(s1.isalpha())
print("abc12".isalpha())
print("abc@".isalpha())

print("isdigit()")
s1="01234"
print(s1.isdigit())
print("-123".isdigit())
print("123@".isdigit())

print("isalnum()")
s1="123abc"
print(s1.isalnum())
print("abc567".isalnum())
print("@123abc".isalnum())
print("123-abc".isalnum())


print("isupper()")
s1="ENGG"
print(s1.isupper())
print("XyZ".isupper())
print("RET@".isupper())
print("$ABC".isupper())
print("123ABC".isupper())

print("islower")
s1="engg"
print(s1.islower())
print("#pqr".islower())
print("3e5f-j".islower())
print(",67Yhhh".islower())


print("istitle()")
s1="YK"
print(s1.istitle())
print("2YK".istitle())
print("Y2K".istitle())
print("Hello World".istitle())
print("Hello world".istitle())














