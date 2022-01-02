#strings in python
'''
split()
split(sep,maxsplit=-1)

The split() string method returns a list of strings that where taken from the
original string and split based on the argument passed to the method.
The method takes an optional argument which limit the number occurrences the
method will split on in the original string.
'''
#'string'.split(sep, maxsplit=-1)

lc='i like audi'
print(lc.split())                    #['i', 'like', 'audi']

#Splitting String by comma(,)
cb='Audi, BMW, KIA, Toyota'
print(cb.split(","))                 #['Audi', ' BMW', ' KIA', ' Toyota']

a,b,k,t=cb.split(', ')               #
print(a)
print(b)
print(k)
print(t)

#observe the space contained in the above split string

print(cb.split(", "))                #['Audi', 'BMW', 'KIA', 'Toyota']
#no space contained in the split string

print(cb.split(", ",1))              #['Audi', 'BMW, KIA, Toyota'] -- 0 indexed
print(cb.split(", ",2))              #['Audi', 'BMW', 'KIA, Toyota']
#You see, it returned a list of two / three items i.e. maxsplit+1.

#Splitting String by newline(\n)
print(''.split("\n"))                #['']
print('Line 1\n'.split("\n"))        #['Line 1', '']

#Splitting using the split function of a string does not keep the separator but
#does give the empty string part in the end:
print("a\nb\nc\n".split("\n"))      #['a', 'b', 'c', '']

#Splitting String by tab(\t)
print(''.split("\t"))               #['']
print('Line 1\t'.split("\t"))       #['Line 1', '']
print("a\tb\tc\t".split("\t"))      #['a', 'b', 'c', '']

#Split string with multiple delimiters
import re
pattern = re.compile(r"[,;\n]")
cb='Audi, BMW; KIA; Toyota\n'
print(pattern.split(cb))             #['Audi', ' BMW', ' KIA', ' Toyota', '']

#Splitting String by None
print(''.split(None))                #[]   
print('\n\tName: Jane Smith'.split(None))       #['Name:', 'Jane', 'Smith']
print('\n\tName: Jane Smith'.split(None,1))     #['Name:', 'Jane Smith']

'''
If you look at the documentation for str.split:

If sep is not specified or is None, a different splitting algorithm is applied:
runs of consecutive whitespace are regarded as a single separator, and the
result will contain no empty strings at the start or end if the string has
leading or trailing whitespace. Consequently, splitting an empty string or a
string consisting of just whitespace with a None separator returns [].

'''

#why not use split("\n")
'''
\n, in Python, represents a Unix line-break , independently from the platform
where you run it.
However, the linebreak representation is platform-dependent. On Windows, \n is
two characters, CR and LF (AKA \r and \n), while on any modern Unix (including
OS X), it's the single character LF.

print, for example, works correctly even if you have a string with line endings
that don't match your platform:
'''

print(" a \n b \r\n c ")

#However, explicitly splitting on "\n", will yield platform-dependent behaviour:

print(" a \n b \r\n c ".split("\n"))        #[' a ', ' b \r', ' c ']

#Even if you use os.linesep, it will only split according to the newline separator on
#your platform, and will fail if you're processing text created in other platforms,
#or with a bare \n:

import os
print(" a \n b \r\n c ".split(os.linesep))   #[' a \n b ', ' c ']
print(" a \n b \n\r c ".split(os.linesep))   #[' a \n b \n\r c ']

#look at help(os)...in DATA section you will see linesep = '\r\n'

#rsplit(sep,maxsplit)
'''
Returns a list of strings after breaking the given string from right side by the
specified separator.

split() is used if you want to split strings on first occurrences and
rsplit() is used if you want to split strings on last occurrences.
'''

str1 = "w,e,l,c,o,m,e"
print(str1.split(',',2))                    #['w', 'e', 'l,c,o,m,e']

str2 = "w,e,l,c,o,m,e"
print(str2.rsplit(',',2))                   #['w,e,l,c,o', 'm', 'e']


