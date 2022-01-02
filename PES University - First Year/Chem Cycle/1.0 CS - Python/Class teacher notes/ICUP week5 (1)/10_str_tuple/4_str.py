# name : 4_str.py
"""
s = 'mohanDas Karamchand gandhi'
# print "m K gandhi"
# make a list of words by splitting
# output the first char of each word but for the last; output the last word
ss = ''
namelist = s.split()
for name in namelist[:len(namelist)-1]:
	#print(name[0])
	ss = ss + name[0] + " "
#print(namelist[-1]) # last elem
ss = ss + namelist[-1]
print(ss)
#ss.upper()  # NO; does not change the str; returns a new changed string
ss = ss.upper()
print(ss)	

ss = ss.title()
print(ss)	

s  = s.title()
print(s)	
"""
mylist = [ 
	"indira gandhi",
	"m k gandhi",
	"rahul gandhi",
	"jawaharlal nehru",
	"sardar patel",
	"brijesh patel"
]
for w in mylist :
	if w.endswith('gandhi') :
		print(w)

s = "bad python bad teacher bad lecture"
print(s.replace('bad', 'good')) # default : all occurrences
print(s.replace('bad', 'good', 1))

s = "bad python bad teacher bad lecture"

# find the leftmost bad
print(s.index('bad'))
# find the second bad from left
print(s.index('bad', s.index('bad') + len('bad')))

i = s.index('bad', s.index('bad') + len('bad'))
print(s[i:].replace('bad', 'worst', 1))
print(s[:i] + s[i:].replace('bad', 'worst', 1))







































