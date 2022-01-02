#Literals: It is an element of an expression that describes a constant value.

#Types of literals supported in python 
    #String lietrals
    #numeric literals
    #container literals or literal collections
    #Boolean literals
    #Special literals
    #Object literals -- more specifically user defined objects 

#String Literals
    #In Python 2, all strings are sequences of ASCII characters.
    #In Python 3, all strings are sequences of Unicode characters.
    
print("Hello World")
str1="PESU"
#single quotes
print('who said "to be or not be there" ')
#print('who said 'to be or not be there' ') #syntax err
#double quotes
print("DNA goes from '5 to 3'.")
#print("DNA goes from "5 to 3".")   #syntax err
#triple quoted string
print('''this string can go to
several lines''')
#escaped quotes
print("\" This is noy fair!\" yelled my brother.")
#raw strings
print(r"""hello world""")
print(r'''hello world''')
#Two or more string literals (i.e. the ones enclosed between quotes)
#next to each other are automatically concatenated.
print("py""thon")
str1="py" "THON"
print(str1)
#this is not allowed
'''str1='pes'
str1=str1'u'
print(str1)'''
#This feature is particularly useful when you want to break long strings:
str1=("hello "
      "how are you")
print(str1)
#f-string literal i.e. formatted string 
name='abc'
uni='pesu'
print(f'welcome to {name} to {uni} ')
#The f-string also supports certain types of conversions,
#such as str() via ‘!s’ and repr() via ‘!r’. 
print(f'welcome to {name!r} to {uni!r} ')
print(f'welcome to {name!s} to {uni!s} ')

#Python 3.x makes a clear distinction between the types:

#str = '...' literals = a sequence of Unicode characters (UTF-16 or UTF-32, depending on how Python was compiled)
#bytes = b'...' literals = a sequence of octets (integers between 0 and 255)

strp="Hello"
strb=b"Hello"
print(type(strp),type(strb))

#Python 2 vs Python 3 String Handling

#"Hello" string literal in py 2 is a "str" object but its stored as bytes.
#If you prefix it with "u" you get a "unicode" object.

#"Hello" string literal in py3 is a "str" object that stores Unicode code points by default
#You can prefix it with "b" to get a bytes object or use .encode.


#Numeric Literals
    #int, float and complex

n1=123       # an integer / decimal
n2=1.23      # a floating point number
n3= -1.23     # a negative floating point number
n4= 1.23E45;   # scientific notation
n5= 3.4j;    # imaginary literals 12 + 3i (Note that Python uses "j"!)
print(n5)
n6=13+n5
print(n6)
#PEP 515 adds the ability to use underscores in numeric literals
#for improved readability.
#Single underscores are allowed between digits and after any base specifier.
#Leading, trailing, or multiple underscores in a row are not allowed.
n6=10_00_000
print(n6)

#continer literals
#list
nums=[1,2,3,4,5]
print(nums)
print(type(nums))

#tuple
nums=(1,2,3,4,5)
print(nums)
print(type(nums))

nums=1,2,3,4,5
print(nums)
print(type(nums))

nums=1,
print(nums)
print(type(nums))

#dictionary
nums={"Apple":120,"Mangos":100,"pineapple":75}
print(nums)
print(type(nums))

#set 
nums = {1,2,3,4,5}
print(nums)
print(type(nums))

nums=({1,2,3,4,5})
print(nums)
print(type(nums))

#Boolean Literals: True / False
nums=True 
print(nums)
print(type(nums))

#Special Literals
nums=None
print(nums)
print(type(nums))








