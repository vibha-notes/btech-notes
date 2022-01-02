# The upper() and lower() string methods return a new string
# where all the letters in the original string have
# been converted to uppercase or lower-case, respectively.
spam = 'Hello world!'
print(id(spam))
spam = spam.upper()     #you have to store the new string
print(spam)
print(id(spam))


# Since the upper() and lower() string methods themselves return strings,
# you can call string methods on those returned string values as well.     
print("Hello".lower().islower())
s="Hello"
print(s.upper().lower().title() == s)
print(s.upper().lower()==s)
s="helloworld"
print(s.upper().lower()==s)
s="hello"
print(s.upper().lower()==s)
print(s.upper().lower().title()==s.title())
#print(s.islower().lower()==s)          #error

print("\n\n\n")
# isalpha()-> returns True if the string consists only of letters
# and is not blank.
print("isalpha()")
s="abc"
print(s.isalpha())
s=""
print(s.isalpha())
s="hello is a"
print(s.isalpha())
s="Hello@"
print(s.isalpha())
s="Hello12"
print(s.isalpha())

print("\n\n\n")

# isalnum() returns True if the string consists only of letters
# and numbers and is not blank
print("isalnum()")
s="abc"
print(s.isalnum())
s=""
print(s.isalnum())
s="hello is a"
print(s.isalnum())
s="Hello@"
print(s.isalnum())
s="Hello12"
print(s.isalnum())
s="12"
print(s.isalnum())
print("\n\n\n")



#str.isdecimal()
#Return true if all characters in the string are decimal characters and there is at least one character,
#false otherwise. Decimal characters are those from general category “Nd”.
#This category includes digit characters, and all characters thatcan be used to form
#decimal-radix numbers, e.g. U+0660, ARABIC-INDIC DIGIT ZERO.

print("isdecimal()")
s="Hello"
print(s.isdecimal())
s="12Hello"
print(s.isdecimal())
s="2456"
print(s.isdecimal())
s="12.36"
print(s.isdecimal())
s="\u2155"          #unicode
print(s.isdecimal())
print(str(s))
s="\u1255"
print(s)
print(s.isdecimal())
s="\u00B2"
print(s)
print(s.isdecimal())
s="\u00BD"
print(s)
print(s.isdecimal())
s="\u0660"
print(s)
print(s.isdecimal())
print("\n\n\n")

#isnumeric() : number+unicode char num
#Return true if all characters in the string are numeric characters, and there is
#at least one character, false otherwise. Numeric characters include digit characters
#and all characters that have the Unicode numeric value property, e.g. U+2155,
#Formally, numeric characters are those with the property value
#Numeric_Type=Digit, Numeric_Type=Decimal or Numeric_Type=Numeric.
print("isnumeric()")
s="1234"
print(s.isnumeric())
s="1234h"
print(s.isnumeric())
s="12.45"
print(s.isnumeric())
s="h2345"
print(s.isnumeric())
s="@123"
print(s.isnumeric())
s="\u2155"          #unicode
print(s.isnumeric())
print(str(s))
s="\u1255"
print(s)
print(s.isnumeric())
s="\u00B2"
print(s)
print(s.isnumeric())
s="\u00BD"
print(s)
print(s.isnumeric())
s="\u0660"
print(s)
print(s.isnumeric())
print("\n\n\n")


#isdigit()
#str.isdigit()
#Return true if all characters in the string are digits and there is at least one character, false otherwise.
#Digits include decimal characters and digits that need special handling, such as the compatibility
#superscript digits. Formally, a digit is a character that has the property value
#Numeric_Type=Digit or Numeric_Type=Decimal.

print("isdigit()")
s="1234"
print(s.isdigit())
s="1234h"
print(s.isdigit())
s="12.45"
print(s.isdigit())
s="h2345"
print(s.isdigit())
s="@123"
print(s.isdigit())
s="\u2155"          #unicode
print(s.isdigit())
print(str(s))
print(s.isdigit())
s="\u1255"
print(s)
print(s.isdigit())
s="\u00B2"
print(s)
print(s.isdigit())
s="\u00BD"
print(s)
print(s.isdigit())
s="\u0660"
print(s)
print(s.isdigit())
print("\n\n\n")

#isspace
#str.isspace()
#Return true if there are only whitespace characters in the string and there is at least one character,
#false otherwise. Whitespace characters are those characters defined in the Unicode character
#database as “Other” or “Separator” and those with bidirectional property being one of “WS”, “B”, or “S”.

print("isspace()")
s=""
print(s.isspace())
s=' '
print(s.isspace())
s=' hello'
print(s.isspace())
s='hello world    '
print(s.isspace())
s='abc  '
print(s.isspace())
s=('''
   ''')
print(s.isspace())
s='   abc'
print(s.isspace())
s='12 3 4'
print(s.isspace())
print("\n\n\n")


#isidentifier
#str.isidentifier()
#Return true if the string is a valid identifier according to the language definition,

print("isidentifier()")
s="print"
print(s.isidentifier())
s="hello"
print(s.isidentifier())
s="$"
print(s.isidentifier())
s="   h"
print(s.isidentifier())
s="@123"
print(s.isidentifier())
s="_hello"
print(s.isidentifier())
print("\n\n\n")

#keyword.iskeyword()
#Use keyword.iskeyword() to test for reserved identifiers such as def and class.
import keyword
s="print"               
print(keyword.iskeyword(s))
s="while"
print(keyword.iskeyword(s))
print("\n\n\n")

#str.capitalize()
#Return a copy of the string with its first character capitalized and the rest lowercased.
s="hello world"
print(s.capitalize())
s="hello"
print(s.capitalize())
s="hello 123"
print(s.capitalize())
s="@#$yter"
print(s.capitalize())
print("\n\n\n")
s="hello@"
print(s.capitalize())
s='123hello'
print(s.capitalize())
s='_hello'
print(s.capitalize())

#casefold () - Return a casefolded copy of the string.
#Casefolded strings may be used for caseless matching.
#Casefolding is similar to lowercasing but more aggressive because
#it is intended to remove all case distinctions in a string.
s="Hello World"
print(s.casefold())
s="HELLO HOW ARE you$"
print(s.casefold())
s="2123Hello"
print(s.casefold())
s="hello@"
print(s.casefold())
s='123hello'
print(s.casefold())
s='_HellO'
print(s.casefold())
print("\n\n\n")

#str.center(width[,fillchar])
#Returns a string where the original string is center justified filled with fillchar to the width
#of width. The default fill character is a space. If original string length is longer or equal
#width, the original string is returned.
s="hello"
print(s.center(20,"*"))
s="hello world"
print(s.center(20,"*"))
s="ABC"
print(s.center(3))
s="this is icup"
print(s.center(3))
s="this is icup"
print(s.center(-5))
s="this is icup"
print(s.center(-100))
print("\n\n\n")

#str.rjust(width[,fillchar])
#Returns a string where the original string is right-justified padded with fillchar to the
#width of width. If original string length is longer or equal width, the original string is
#returned. 
s="hello"
print(s.rjust(20,"*"))
s="hello world"
print(s.rjust(20,"*"))
s="ABC"
print(s.rjust(3))
s="this is icup"
print(s.rjust(3))
s="this is icup"
print(s.rjust(-5))
s="this is icup"
print(s.rjust(-100,"$"))
print("\n\n\n")


#str.ljust(width[,fillchar])
#Returns a string where the original string is left-justified padded with fillchar to the
#width of width. If original string length is longer or equal width, the original string is
#returned. 
s="hello"
print(s.ljust(20,"*"))
s="hello world"
print(s.ljust(20,"*"))
s="ABC"
print(s.ljust(3))
s="this is icup"
print(s.ljust(3))
s="this is icup"
print(s.ljust(-5))
s="this is icup"
print(s.ljust(-100,"$"))
print("\n\n\n")



