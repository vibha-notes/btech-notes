# name: 2_tuple.py

a = 1, 2, 3
print(a, type(a))
x, y, z = a
print(x, y, z)
#q, w = a # error; # of variables on the left should match the # of elem in the tuple

# use of unnamed tuple
a, b = 11, 22
# (a, b) = (11, 22)
print("a : ", a,  " b : ", b)
# in case of assignment, the right hand side is completely evaluated before assignment
(a, b) = (b, a) # swaps two variables
# (a, b) = (22, 11)
print("a : ", a,  " b : ", b)

#-----------------

score = { }
#score['gavaskar'] = 10000
# many times, key has components : composite key
# should be immutable; cannot be a list
#score[['sunil', 'gavaskar']] = 10000 # NO
#score[['rohan', 'gavaskar']] = 1000 # NO

score[('sunil', 'gavaskar')] = 10000
score[('rohan', 'gavaskar')] = 1000
print(score)
print(score['rohan', 'gavaskar'])





















