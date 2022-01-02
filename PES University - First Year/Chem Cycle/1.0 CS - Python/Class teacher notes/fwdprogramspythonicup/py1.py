#program structure
# most of the langs: main ? no
#execs top to bottom
#-case senestive

print("Hello")

#print "Hello"   #invalid

print("HEllo", )

print('HEllo', sep=' ')

#Strings are enclosed using single quote or double quote.

#Print("Hello") NameError: name 'Print' is not defined--> runtime err

#print('I'm learning python')   #SyntaxError: invalid syntax
#The problem here is that Python interpreter thinks that the second
#quotation mark, right after character I, marks the end of the string
#and doesn't know what to do with the rest of the characters.




#You can use \n for linebreak, and \t for tab, etc.
a = "this\nthat\n"    # use \n for line-break
b = 'more\nthings'    # single quote works too
print(a, b)

print   #terminates here only 
(
    "ABChello"
)

print(
    "hello"
)

print \
(
    "hEllo"
)

print("hello"); print("how are you")  #multiple prints in same line using semicolon 

foo=print
print(type(foo))
foo=123
print(type(foo))
#    print("hello")             #indentation error 

print("one","two","three")
print(print)

'''print(...)
    print(value, ..., sep=' ', end='\n', file=sys.stdout, flush=False)
    
    Prints the values to a stream, or to sys.stdout by default.
    Optional keyword arguments:
    file:  a file-like object (stream); defaults to the current sys.stdout.
    sep:   string inserted between values, default a space.
    end:   string appended after the last value, default a newline.
    flush: whether to forcibly flush the stream.
'''

print("one","two","three", sep="----", end="\nxxxx")
print("four")

#disabling soft spaces
print("A","B","C",sep='')

#for formatting a date
print("19","11","2018",sep='-')

#for printing emailid
print("a.vinay","pes.edu",sep="@")


#customize the separator between items
print("There are <", 2**32 , "> possibilities!", sep=" ")


#sep with end
print("A","B",sep='',end='')
print("C")

#sep with end for formatting a date
print("19","11", sep='-', end="-2018\n")


#sep with end for printing emailid
print("a","vinay",sep=".", end='@'); print("pes","edu")

#sep with end for printing emailid
#print("a","vinay",sep=".", end='@',"pes","edu")  #error

#sep with end for printing emailid
print("a","vinay",sep=".", end='@pes.edu')


#To quote a string of multiple lines, use triple quotes.
d = """this
will be printed
in 3 lines"""
print(d)

print("""hello""")
print()
print('''hello''')


#You can add r in front of the quote symbol.
#This way, backslash characters will be interpreted as is, not as escapes.
#(“r” for “raw”)
c = r"this \n and that"
print(c) # prints a single line


#Escape Characters
#Another way to format strings is to use an escape character.
#Escape characters all start with the backslash key ( \ ) combined with
#another character within a string to format the given string a certain way.
'''
Escape character	How it formats
\	            New line in a multi-line string
\\	            Backslash
\'	            Apostrophe or single quote
\"	            Double quote
\n	            Line break
\t	            Tab (horizontal indentation)
'''

#to add the quotation marks
print("PESU says, \"WELCOME TO PESU!\"")

#to add an apostrophe in a string that is enclosed in single quotes
print('The kid\'s PESSAT score is very high.')


#Multiple lines
print(
    """
This string is on 
multiple lines
within three double 
quotes on either side.
"""
    )

# or
print(
    '''
This string is on 
multiple lines
within three double 
quotes on either side.
'''
    )
print()
#When we use triple quotes like we did above, we will see that there is a space
#at the top and bottom when we print the string. We can remove those spaces by
#using the \ escape key at the top of our string and again at the end
#of the string while keeping the text within the program very readable.

print(
    """\
This multi-line string
has no space at the
top or the bottom
when it prints.\
"""
    )

#We can combine escape characters
print("1.\tShark\n2.\tShrimp\n10.\tSquid")






