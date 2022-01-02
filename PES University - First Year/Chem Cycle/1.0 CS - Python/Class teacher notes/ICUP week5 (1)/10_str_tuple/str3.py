# name : str3.py

"""
this program
is about playing
with strings
"""
#  stored in a variable : __doc__
# strings
#	sequence
#	indexed
#	leftmost index : 0
#	immutable
#	no character type
#	can be sliced
#	cannot assign

a = "rose"
print(a, type(a), a[2], type(a[2]))
#a[0] = 'b' # error

# make a string:
# 1. single quotes
# 2. double quotes
#	no difference between them
#	escape sequences are expanded

s1 = "this is a \n string"
s2 = 'this is a \n string'
print(s1, type(s1))
print(s2, type(s2))

x = "indira gandhi is nehru's daughter's name"
print(x)

# 3. raw string
# no escaping
s3 = r"this is a \n string"
print(s3, type(s3))

# 4. triple quoted string
s4 = """
we love python
very much
"""
print(s4, type(s4))
print("document string : ", __doc__)
























