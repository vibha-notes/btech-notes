#strip
'''
strip() --> delete all the leading and trailing characters
strip(self, chars=None, /)
    Return a copy of the string with leading and trailing whitespace remove.
    If chars is given and not None, remove characters in chars instead.

lstrip() --> delete all the leading character
lstrip(self, chars=None, /)
    Return a copy of the string with leading whitespace removed.
    If chars is given and not None, remove characters in chars instead.


rstrip() --> delete all the trailing characters
rstrip(self, chars=None, /)
    Return a copy of the string with trailing whitespace removed.
    If chars is given and not None, remove characters in chars instead.
'''
#ex1:
str1='### Welcome to strings module ###'
print(str1.strip())     
print(str1.lstrip())
print(str1.rstrip())
'''
### Welcome to strings module ###
### Welcome to strings module ###
### Welcome to strings module ###
'''
print("\n\n\n")
print(str1.strip('#'))
print(str1.lstrip('#'))
print(str1.rstrip('#'))
'''
 Welcome to strings module 
 Welcome to strings module ###
### Welcome to strings module
'''
print("\n\n\n")
print(str1.strip('# '))
print(str1.lstrip('# '))
print(str1.rstrip('# '))
'''
Welcome to strings module
Welcome to strings module ###
### Welcome to strings module
'''
#ex2:
path = "/Volumes/Users"
print(path.lstrip('/Volume'))       #s/Users  
print(path.lstrip('/Volumes'))      #Users
#expecting output of path.lstrip('/Volumes') should be /Users but got Users
#why this behavior
'''
lstrip is character-based, it removes all characters from the left end that are in that string.
Since / is part of the string, it is removed.
'''
path = "/vol/volume"        
print(path.lstrip('/vol'))      #ume 
#The example above shows, how lstrip() works. It removes '/vol' starting form left.
#Then, is starts again... 

path=r"d:\stuff\morestuff\furtherdown\THEFILE.txt"
print(path.split("\\"))     #['d:', 'stuff', 'morestuff', 'furtherdown', 'THEFILE.txt']

#ex3:
url='www.example.com'
print(url.strip('cmowz.'))          #example
print(url.lstrip('cmowz.'))         #example.com
print(url.rstrip('cmowz.'))         #www.example
#The argument passed to strip/lstrip/rstrip is taken as a set of characters

url='www.pesu.org'
print(url.strip('.grow'))          #pesu
print(url.lstrip('.grow'))         #pesu.org
print(url.rstrip('.grow'))         #www.pesu



#EXTRA NOTES:
'''
For paths, you may want to use os.path.split(). It returns a list of the paths elements.
'''
import os
print(os.path.split('/home/user'))  #('/home', 'user')
#next example
your_path = r"d:\stuff\morestuff\furtherdown\THEFILE.txt"
path_list = your_path.split(os.sep)
print (path_list)

'''
In Python >=3.4 this has become much simpler.
You can now use pathlib.Path.parts to get all the parts of a path.
'''
from pathlib import Path
print(Path('C:/path/to/file.txt').parts)    #('C:\\', 'path', 'to', 'file.txt')
print(Path(r'C:\path\to\file.txt').parts)   #('C:\\', 'path', 'to', 'file.txt')

'''
On a Windows install of Python 3 this will assume that you are working with
Windows paths and on Unix /Linux it will assume that you are working with posix paths.
This is usually what you want, but if it isn't you can use the classes
pathlib.PurePosixPath or pathlib.PureWindowsPath as needed:
'''
from pathlib import PurePosixPath, PureWindowsPath
print(PurePosixPath('/path/to/file.txt').parts)     #('/', 'path', 'to', 'file.txt')
print(PureWindowsPath(r'C:\path\to\file.txt').parts)#('C:\\', 'path', 'to', 'file.txt')
print(PureWindowsPath(r'\\host\share\path\to\file.txt').parts)
#('\\\\host\\share\\', 'path', 'to', 'file.txt')


#Splitlines

# splitlines with new lines
solar="earth\n venus\n mercury\n mars\n jupiter\n"
solar.splitlines() 
 
# splitlines with carriage return
continents ="Asia\r Africa\r Europe\r NA\r SA\r Australia\r"
continents.splitlines()
 
# splitlines with both newline and carriage return
countries="India\n UK\r USA\r France\n Russia\n"
countries.splitlines()

#The splitline() Function splits into lines on below mentioned separators
'''
Notation	Description
--------        -----------------------------
\n	        Line Feed
\r	        Carriage Return
\r\n	        Carriage Return + Line Feed
\v  or  \x0b	Line Tabulation
\f  or  \x0c	Form Feed
\x1c	        File Separator
\x1d	        Group Separator
\x1e	        Record Separator
\x85	        Next Line (C1 Control Code)
\u2028	        Line Separator
\u2029	        Paragraph Separator
'''

# splitlines with keepends
sampleText = """The Little Prince is
a classic tale of equal appeal
to children and grown ups."""

lines=sampleText.splitlines()            
print(lines)
linesWithEnds=sampleText.splitlines(keepends=True)
print(linesWithEnds)
#alternatively 
lines1=sampleText.splitlines(sampleText.count('\n'))
print(lines1)
#alternatively 
lines2=sampleText.splitlines(-1)  
print(lines2)


#split vs splitlines
print(''.split())
print("".splitlines())


fn=open("cars.txt","r")
lc=fn.readlines()
for c in lc:
    print(c)
fn.close()
print("\n\n\n")
 
#on running above code we observe newlines
#solutions - 2

#1. use strip
fn=open("cars.txt","r")
lc=fn.readlines()
for c in lc:
    print(c.strip())
fn.close()
print("\n\n\n")

#2. use splitlines with read
fn=open("cars.txt","r")
lc=fn.read().splitlines()
for c in lc:
    print(c)
fn.close()



