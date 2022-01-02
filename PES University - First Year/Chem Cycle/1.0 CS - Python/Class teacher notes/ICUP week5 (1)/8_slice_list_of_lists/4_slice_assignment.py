# file : 4_slice_assignment.py
# assignment of slice
a = [ 10, 20, 30, 40, 50, 60]
# remove the elements on the left
# replace by the elements on the right
a[2:4] = [100, 200]  #right hand side(rhs) should be iterable
print(a)
# [10, 20, 100, 200, 50, 60]

a = [ 10, 20, 30, 40, 50, 60]
a[2:4] = [1000, 2000, 3000, 4000]
print(a) # list has become bigger
# [10, 20, 1000, 2000, 3000, 4000, 50, 60]

a = [ 10, 20, 30, 40, 50, 60]
a[2:4] = [] # list has become smaller
print(a)
# [10, 20, 50, 60]

a = [ 10, 20, 30, 40, 50, 60]
a[2:4] = "pesu" #  str is iterable
print(a)
# [10, 20, 'p', 'e', 's', 'u', 50, 60]

a = [ 10, 20, 30, 40, 50, 60]
a[2] = "fool"  # a[2] is not a slice; 
print(a)
[10, 20, 'fool', 40, 50, 60]

a = [ 10, 20, 30, 40, 50, 60]
a[2:3] = "fool"  #a[2:3] is a slice
print(a)
# [10, 20, 'f', 'o', 'o', 'l', 40, 50, 60]



