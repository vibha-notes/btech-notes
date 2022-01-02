# name : 1_tuple.py

# tuple
#	is a sequence
#	like a list
#	indexed by int; leftmost element has an index 0
#	select the element using []
#	is immutable
#	once created, cannot be changed
#	length of the tuple cannot change
#	heterogeneous
#	iterable
a = (11, 33, 22, 44, 55)
print(a)
print(a[2]) # 22
print(a[2:4]) # (22, 44)

#a[2] = 222 # NO
#a.append(66)

#ok; a new tuple created
a = a + (111, 222)
print(a)


b = ([12, 23], {34 : 45}, "56" )
print(b, len(b))

b[0].append(67)  #ok
#b[0] = [78, 89]  #no
#del b[0] # no
#b[0] += [100] # no ; assignment forbidden

a = (11, 33, 22, 44, 55)
for i in a :
	print(i, end = " ")
print()

c = [11, 22, 33, 44]
for i in c :
	print("one")  # 4 times

for i in [c] :
	print("two")  # once

for i in (c) : #  not a tuple
	print("three") # 4 times

for i in (c,) : #  a tuple
	print("four") # once

print( (3, 4) * 2) # (3, 4, 3, 4)
print( (3 + 4) * 2) #  14
print( (3 + 4,) * 2) #  (7, 7)
# tuple of one element requires an extra comma
d = ()
print(d, type(d))

e = (11, 33, 11, 11, 44, 33)
print(e.count(11)) # 3
print(e.count(33)) # 2
print(e.count(55)) # 0
print(e.index(44)) # 4
print(e.index(11)) # 0
print(e.index(55)) # error

