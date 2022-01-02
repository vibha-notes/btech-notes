#str.count(sub[, start[, end]]): 
#Return the number of non-overlapping occurrences of substring sub in the range[start, end].
#Optional arguments start and end are interpreted as in slice notation.


str1='Mary had a little lamb'
print(str1.count('a'))
print(str1.count('a',2))
print(str1.count('a',2,10))
print(str1.count('a',2,20))
print(str1.count('a',-3))       #if neg index used only at that loc if found 1 else 0
print(str1.count('a',-10))
print(str1.count('a',-1))
print(str1.count('a',-17))
print(str1.count('a',-22))
print(str1.count('a',-3,-17))
print(str1.count('a',-17,-3))
print(str1.count('a',-17,-1))
print(str1.count('a',-3,-17,-1))
print(str1.count('lam'))

#str.find(sub[, start[, end]])
#Return the lowest index in the string where substring sub is found within the
#slice s[start:end]. Optional arguments start and end are interpreted as in
#slice notation. Return -1 if sub is not found.
print("\n\n\n")
str1='Mary had a little lamb'
print(str1.find('a'))
print(str1.find('a',2))
print(str1.find('a',2,10))
print(str1.find('a',2,12))
print(str1.find('a',8,12))
print(str1.find('a',2,20))
print(str1.find('a',-3))
print(str1.find('a',-1))
print(str1.find('a',-17))
print(str1.find('a',-22))
print(str1.find('a',-3,-17))
print(str1.find('a',-17,-3))
print(str1.find('a',-17,-1))
print(str1.find('a',-3,-17,-1))
print(str1.find('lam'))
print(str1.find('a',-1))            #neg index doesnot work
print(str1.find('z'))

#str.rfind(sub[, start[, end]])
#Return the highest index in the string where substring sub is found,
#such that sub is contained within s[start:end].
#Optional arguments start and end are interpreted as in slice notation. Return -1 on failure.
print("\n\n\n")
str1='Mary had a little lamb'
print(str1.rfind('a'))
print(str1.rfind('a',2))
print(str1.rfind('a',2,10))
print(str1.rfind('a',2,12))
print(str1.rfind('a',8,12))
print(str1.rfind('a',2,20))
print(str1.rfind('a',-3))
print(str1.rfind('a',-1))
print(str1.rfind('a',-17))
print(str1.rfind('a',-22))
print(str1.rfind('a',-3,-17))
print(str1.rfind('a',-17,-3))
print(str1.rfind('a',-17,-1))
print(str1.rfind('a',-3,-17,-1))
print(str1.rfind('lam'))
print(str1.rfind('a',-1))            #neg index doesnot work
print(str1.rfind('z'))



#str.index(sub[, start[, end]])
#Like find(), but raise ValueError when the substring is not found.
print("\n\n\n")
str1='Mary had a little lamb'
print(str1.index('a'))
print(str1.index('a',2))
print(str1.index('a',2,10))
print(str1.index('a',2,12))
print(str1.index('a',8,12))
print(str1.index('a',2,20))
print(str1.index('a',-3))
print(str1.index('a',-1))
print(str1.index('a',-17))
print(str1.index('a',-22))
print(str1.index('a',-3,-17))
print(str1.index('a',-17,-3))
print(str1.index('a',-17,-1))
print(str1.index('a',-3,-17,-1))
#print(str1.index('a',-1))              #value error : substring not found 
#print(str1.index('z'))                  #value error : substring not found 



#str.rindex(sub[, start[, end]])
#Like rfind(), but raise ValueError when the substring is not found.
print("\n\n\n")
str1='Mary had a little lamb'
print(str1.rindex('a'))
print(str1.rindex('a',2))
print(str1.rindex('a',2,10))
print(str1.rindex('a',2,12))
print(str1.rindex('a',8,12))
print(str1.rindex('a',2,20))
print(str1.rindex('a',-3))
print(str1.rindex('a',-1))
print(str1.rindex('a',-17))
print(str1.rindex('a',-22))
print(str1.rindex('a',-3,-17))
print(str1.rindex('a',-17,-3))
print(str1.rindex('a',-17,-1))
print(str1.rindex('a',-3,-17,-1))
#print(str1.rindex('a',-1))              #value error : substring not found 
#print(str1.rindex('z'))                  #value error : substring not found 


#str.split(sep=None, maxsplit=-1)
#Return a list of the words in the string, using sep as the delimiter string.
#If maxsplit is given, at most maxsplit splits are done
# (thus, the list will have at most maxsplit+1 elements).
#If maxsplit is not specified or -1, then there is no limit on the number of splits
#(all possible splits are made).

#If sep is given, consecutive delimiters are not grouped together and are deemed to
#delimit empty strings (for example, '1,,2'.split(',') returns ['1', '', '2']).
#The sep argument may consist of multiple characters (for example, '1<>2<>3'.split('<>')
#returns ['1', '2', '3']). Splitting an empty string with a specified separator returns ['']

print('1,2,3'.split(','))                               #['1', '2', '3']
print('1,2,3'.split(',', maxsplit=1))           #['1', '2,3']
print('1,2,3'.split(',', maxsplit=2))           #['1', '2', '3']
print('1,2,3'.split(',', maxsplit=5))           #['1', '2', '3']
print( '1,2,,3,'.split(','))                            #['1', '2', '', '3', '']
print(' '.split())
s='mary had a little lamb lamb'
print("\n\n\n")
lst=s.split()
print(lst)

s='mary, had, a little, lamb lamb'
lst=s.split(',')
print(lst)

s='mary, had, a little, lamb lamb'
lst=s.split(',',maxsplit=2)
print(lst)

s='mary, had, a little, lamb lamb'
lst=s.split(',',maxsplit=3)
print(lst)

s='mary, had, a little, lamb lamb'
lst=s.split(' ',maxsplit=3)
print(lst)

#If sep is not specified or is None, a different splitting algorithm is applied:
#runs of consecutive whitespace are regarded as a single separator, and
#the result will contain no empty strings at the start or end if the string has
#leading or trailing whitespace. Consequently, splitting an empty string or a string
#consisting of just whitespace with a None separator returns [].

print( '1 2 3'.split())                                  #['1', '2', '3']
print( '1 2 3'.split(maxsplit=1))                #['1', '2 3']
print( '   1   2   3   '.split())                       #['1', '2', '3']
print( '   1   23   '.split())                          #['1', '23']


#str.rsplit(sep=None, maxsplit=-1)
#Return a list of the words in the string, using sep as the delimiter string.
#If maxsplit is given, at most maxsplit splits are done, the rightmost ones.
#If sep is not specified or None, any whitespace string is a separator.
#Except for splitting from the right, rsplit() behaves like split() which is described in detail below.
print("\n\n\n")
print('1,2,3'.rsplit(','))                               #['1', '2', '3']
print('1,2,3'.rsplit(',', maxsplit=1))           #['1,2' ,3']
print('1,2,3'.rsplit(',', maxsplit=2))           #['1', '2', '3']
print('1,2,3'.rsplit(',', maxsplit=5))           #['1', '2', '3']
print( '1,2,,3,'.rsplit(','))                          #['1', '2', '', '3', '']
print( '1,,2,,3,'.rsplit(','))                          # ['1', '', '2', '', '3', '']
s='mary had a little lamb lamb'
print("\n\n\n")
lst=s.rsplit()
print(lst)

s='mary, had, a little, lamb lamb'
lst=s.rsplit(',')
print(lst)

s='mary, had, a little, lamb lamb'
lst=s.rsplit(',',maxsplit=2)
print(lst)

s='mary, had, a little, lamb lamb'
lst=s.rsplit(',',maxsplit=3)
print(lst)

s='mary, had, a little, lamb lamb'
lst=s.rsplit(' ',maxsplit=3)
print(lst)

#str.splitlines([keepends])
#Return a list of the lines in the string, breaking at line boundaries.
#Line breaks are not included in the resulting list unless keepends is given and true.

print( 'ab c\n\nde fg\rkl\r\n'.splitlines())                                 #['ab c', '', 'de fg', 'kl']
print('ab c\n\nde fg\rkl\r\n'.splitlines(keepends=True))        #['ab c\n', '\n', 'de fg\r', 'kl\r\n']

str = "Line1-a b c d e f\nLine2- a b c\n\nLine4- a b c d";
print( str.splitlines( ))
print (str.splitlines( 0 ))
print (str.splitlines( 3 ))
print (str.splitlines( 4 ))
print( str.splitlines( 5 ))

s="a  b   c \
e f g \n \
h i j \n \
l m n o p"

print(s.splitlines())


#str.lstrip([chars])
#Return a copy of the string with leading characters removed.
#The chars argument is a string specifying the set of characters to be removed.
#If omitted or None, the chars argument defaults to removing whitespace.
#The chars argument is not a prefix; rather, all combinations of its values are stripped:

print( '   hello world   '.lstrip())
print('www.pes.edu'.lstrip('ew.'))
print('www.pes.edu'.lstrip('ew'))
print('www.pes.edu'.lstrip('www'))
print('www.pes.edu'.lstrip('e.'))
print('www.pes.edu'.lstrip('eduw.'))

#str.rstrip([chars])
#Return a copy of the string with trailing characters removed.
#The chars argument is a string specifying the set of characters to be removed.
#If omitted or None, the chars argument defaults to removing whitespace.
#The chars argument is not a suffix; rather, all combinations of its values are stripped

print( '   hello world   '.rstrip())
print('www.pes.edu'.rstrip('.e'))
print('www.pes.edu'.rstrip('.edu'))
print('www.pes.edu'.rstrip('www.edu.'))
print('www.pes.edu'.rstrip('eduw.'))

#str.strip([chars])
#Return a copy of the string with the leading and trailing characters removed.
#The chars argument is a string specifying the set of characters to be removed.
#If omitted or None, the chars argument defaults to removing whitespace.
#The chars argument is not a prefix or suffix; rather, all combinations of its values are stripped:

print( '   hello world   '.strip())
print('www.pes.edu'.strip('.we'))
print('www.pes.edu'.strip('.edu'))
print('www.pes.edu'.strip('www.edu.'))
print('www.pes.edu'.strip('eduw.'))

#The outermost leading and trailing chars argument values are stripped from the string.
#Characters are removed from the leading end until reaching a string character
#that is not contained in the set of characters in chars.
#A similar action takes place on the trailing end. 

s='#....... ICUP Section!!! E Class #E203 .......!'
print(s.strip('.#! '))


#str.swapcase()
#Return a copy of the string with uppercase characters converted to lowercase and vice versa.


s="HELLO world"
print(s.swapcase())

print(s.swapcase().swapcase()==s)

#Note that it is not necessarily true that s.swapcase().swapcase() == s.

#the micro character µ (U+00B5) and the mu character μ (U+03BC):

print(u'\xb5'.swapcase())                   #u'\u039c'
print(u'\u03bc'.swapcase())               #u'\u039c'
print("\n\n\n")

print(u'\u03bc'.swapcase().swapcase()==u'\u03bc')
s=u'\u03bc'.swapcase().swapcase()
print(s)
u=s.encode('utf-8')
print(u)
print("\n\n\n")


print(u'\xb5'.swapcase().swapcase())
s=u'\xb5'.swapcase().swapcase()
print(s)
u=s.encode('utf-8')
print(u)
print(u'\xb5'.swapcase().swapcase()==u'\xb5')


#str.join(iterable)
#Return a string which is the concatenation of the strings in the iterable iterable.
#A TypeError will be raised if there are any non-string values in iterable, including bytes objects.
#The separator between elements is the string providing this method.

s=','.join(['a','b','c'])
print(s)
s='-'.join(['a','b','c'])
print(s)

s1 = "this is a string"
s1=s1.split()
print(s1)
print(type(s1))
s2=' '.join(s1)
print(s2)
print(type(s2))



#str.partition(sep)
#Split the string at the first occurrence of sep, and return a 3-tuple containing
# the part before the separator, the separator itself, and the part after the separator.
#If the separator is not found, return a 3-tuple containing the string itself, followed by two empty strings.

s="hello world"
print(s.partition(" "))

s="hello world"
print(s.partition(','))

s="hello world, how are you, "
print(s.partition(','))

s="hello world, how are you, "
print(s.partition(';'))

s=input("enter first middle and last name seprated by space")

fname,mname,lname=s.partition(" ")
print(fname,mname,lname)


#str.replace(old, new[, count])
#Return a copy of the string with all occurrences of substring old replaced by new.
#If the optional argument count is given, only the first count occurrences are replaced.

str1='Mary had a little lamb'
str1=str1.replace('a','A',2)
print(str1)

str1='Mary had a little lamb'
str1=str1.replace('a','A')
print(str1)

str1='Mary had a little lamb'
str1=str1.replace('a','A',-2)           #less than 0 is all 
print(str1)

str1='Mary had a little lamb'
str1=str1.replace('a','A',0)           # equal to 0 is none 
print(str1)

#static str.maketrans(x[, y[, z]])
#This static method returns a translation table usable for str.translate().
#If there is only one argument, it must be a dictionary mapping Unicode ordinals (integers)
#or characters (strings of length 1) to Unicode ordinals, strings (of arbitrary lengths) or None.
#Character keys will then be converted to ordinals.
#If there are two arguments, they must be strings of equal length,
#and in the resulting dictionary, each character in x will be mapped to the character
#at the same position in y. If there is a third argument, it must be a string, whose characters will
#be mapped to None in the result.

#str.translate(table)
#Return a copy of the string in which each character has been mapped through the given
#translation table. The table must be an object that implements indexing via __getitem__(),
#typically a mapping or sequence. When indexed by a Unicode ordinal (an integer),
#the table object can do any of the following: return a Unicode ordinal or a string,
#to map the character to one or more other characters; return None,
#to delete the character from the return string;
#or raise a LookupError exception, to map the character to itself.


table=str.maketrans("abc","pes")
str1="abcabc"
str2=str1.translate(table)
print(str2)

table=str.maketrans("abc","pes","def")
str1="ababdef"
str2=str1.translate(table)
print(str2)

table=str.maketrans("abc","pes","def", "mno")           #error
str1="ababdef"
str2=str1.translate(table)
print(str2)

#str.title()
#Return a titlecased version of the string where words start with an
#uppercase character and the remaining characters are lowercase.

print('Hello world'.title())
print('Hello #world'.title())
print('123hello #world'.title())

#str.zfill(width)
#Return a copy of the string left filled with ASCII '0' digits to make a string of length width.
#A leading sign prefix ('+'/'-') is handled by inserting the padding after the sign character rather than
#before. The original string is returned if width is less than or equal to len(s).

print("42".zfill(5))            #'00042'
print("-42".zfill(5))           #'-0042'



#Assignment
#Read and experiment 
#str.expandtabs(tabsize=8)
#str.encode(encoding="utf-8", errors="strict")
#str.format()

