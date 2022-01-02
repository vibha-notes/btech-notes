#index:
#      ------------>
#  0   1   2   3   4
#+---+---+---+---+---+
#| 1 | 2 | 3 | 4 | 5 |
#+---+---+---+---+---+
#  0  -4  -3  -2  -1
#      <------------

#slice:
#    <---------------|
#|--------------->   
#:   1   2   3   4   :
#+---+---+---+---+---+
#| 1 | 2 | 3 | 4 | 5 |
#+---+---+---+---+---+
#:  -4  -3  -2  -1   :
#|--------------->   
#    <---------------|


#Consider a list with 5 integer elements:
thelist = [0,5,10,15,20]
print(thelist)

#Now suppose we wish to change the centre three elements
#(5, 10 and 15, at positions 1, 2 and 3 in the list)
#to the values 6, 7, and 8
print(thelist[1:4])
thelist[1:4] = [6,7,8]
print(thelist)


#If the number of elements in the list on the right hand side of the
#equal sign is not equal to the number of elements implied by
#the subscript of the slice, the list will expand or shrink to
# accomodate the assignment.
#Note: number of elements in a slice is the higher valued subscript
# minus the lower valued subscript

words = ['We','belong','to','the','knights','who','say','"Ni"']
words[1:4] = ['are']                                #shrink
print(words)
#['We', 'are', 'knights', 'who', 'say', '"Ni"']     

words[1:2] = ['are','a','band','of']                #expand
print(words)                
#['We', 'are', 'a', 'band', 'of', 'knights', 'who', 'say', '"Ni"']

# Note that when we are replacing a slice with a single element,
# it must be surrounded by square brackets, effectively making it into
# a list with one element,to avoid a TypeError exception.

# Assignments through slicing differ from those done with simple
# subscripting in that a slice can change the length of a list,
# while assignments done through a single subscript will always
# preserve the length of the list. This is true for slices where
# both of the subscripts are the same. Notice the difference between
# the two expressions shown below:

# using a single subscript
x = ['one','two','three','four','five']
x[1] = ['dos','tres','cuatro']
print(x)
#['one', ['dos', 'tres', 'cuatro'], 'three', 'four', 'five']       

# using a slice 
x = ['one','two','three','four','five']
x[1:1] = ['dos','tres','cuatro']
print(x)
#['one', 'dos', 'tres', 'cuatro', 'two', 'three', 'four', 'five']

# In the example above, we were able to insert three elements
# into an list without replacing any elements in the list by assigning
# to a slice where both subscripts were the same.

# Another use of slices is to make a separate modifiable copy of a list.
# In this case, you create a slice without either a starting or ending index.
# Python will then make a complete copy of the list

x = ['one','two','three']
y = x[:]
print(y)
print(id(y))        #different ids, thus lists are not identical 
print(id(x))
#['one', 'two', 'three']

# One final use of slices is to remove elements from an list.
# If we try to replace a single element or slice of an list with an empty list,
# that empty list will literally replace the locations to which it's assigned.


a = [1,3,5,7,9]
a[2] = []
print(a)
#[1, 3, [], 7, 9]

#But if we replace a slice of an array with an empty list,
#that slice of the array is effectively removed:
b = [2,4,6,8]
b[2:3] = []
print(b)
#[2, 4, 8]

#Another way to remove items from a list is to use the del statement.
#You provide the del statement with the element or slice of a list which
#you want removed, and that element or slice is removed without a trace.

a = [1,3,5,7,9]
del a[2]
print(a)
#[1, 3, 7, 9]

#The del statement is just as effective with slices:

nums = ['one','two','three','four','five']
del nums[0:3]
print(nums)
#['four', 'five']

