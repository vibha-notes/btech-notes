import itertools 
#consider the following two lists
fruits=["apple","mango","pineapple"]
price=[220.05, 185.25, 125.35]

#assume you want to access the corresponding value for each list
'''
defines a variable index which serves as an index variable for iterating
through two lists. Within the for loop the code accesses the corresponding
value for each list by using the index variable.
This is a common way for iterating through two lists,
'''

for index in range(len(fruits)):
    print(fruits[index],price[index])

print("The above is ANTI PATTERN\n\n\n ")

#But it is not the preferred way in Python
'''
Use zip() to iterate through a pair of lists
code below demonstrates the Pythonic style for iterating through a pair of
lists. When the code defines two variables in its for loop in conjunction with
a call to zip(fruits,price) on the pair of lists, Python automatically
assigns the first variable as the next value in the first list,
and the second variable as the next value in the second list.
'''

fruits=["apple","mango","pineapple"]
price=[220.05, 185.25, 125.35]
for fv,pv in zip(fruits,price):
    print(fv,pv)

print("\n\n\n")

'''
zip(iter1 [,iter2 [...]]) --> zip object
 
Return a zip object whose .__next__() method returns a tuple where
the i-th element comes from the i-th iterable argument.  The .__next__()
method continues until the shortest iterable in the argument sequence
is exhausted and then it raises StopIteration.
'''


#Ex2:
  
# initializing lists 
name = [ "Manjeet", "Nikhil", "Shambhavi", "Astha" ] 
roll_no = [ 4, 1, 3, 2 ] 
marks = [ 40, 50, 60, 70 ] 
  
# using zip() to map values 
mapped = zip(name, roll_no, marks) 
  
# converting values to print as set 
mapped = set(mapped)

# printing resultant values  
print ("The zipped result is : ",end="") 
print (mapped)


print("\n\n\n")

#Ex3
#Unzipping means converting the zipped values back to the individual self as they were.
#This is done with the help of “*” operator.

# Python code to demonstrate the working of  
# unzip 
  
# initializing lists 
  
name = [ "Manjeet", "Nikhil", "Shambhavi", "Astha" ] 
roll_no = [ 4, 1, 3, 2 ] 
marks = [ 40, 50, 60, 70 ] 
  
# using zip() to map values 
mapped = zip(name, roll_no, marks) 
  
# converting values to print as list 
mapped = list(mapped) 
  
# printing resultant values  
print ("The zipped result is : ",end="") 
print (mapped) 
  
print("\n") 
  
# unzipping values 
namz, roll_noz, marksz = zip(*mapped) 
  
print ("The unzipped result: \n",end="") 
  
# printing initial lists 
print ("The name list is : ",end="") 
print (namz) 
  
print ("The roll_no list is : ",end="") 
print (roll_noz) 
  
print ("The marks list is : ",end="") 
print (marksz)


print("\n\n\n")
#zip() in conjunction with the * operator can be used to unzip a list:
x = [1, 2, 3]
y = [4, 5, 6]
x2, y2 = zip(*zip(x, y))
print(x2,y2)
print(x == list(x2) and y == list(y2))      #True


#consider the following two lists
fruits=["apple","mango","pineapple","grapes","cherry"]
price=[220.05, 185.25, 125.35]
for fv,pv in zip(fruits,price):
    print(fv,pv)
print("\n\n\n")

#Here we have uneven sized lists and zip stops at smallest one 
#Note that zip with different size lists will stop after the shortest list runs out of items. 
#Sol: use zip_longest() from itertools module

'''
itertools.zip_longest(*iterables, fillvalue=None)
Make an iterator that aggregates elements from each of the iterables.
If the iterables are of uneven length, missing values are filled-in with fillvalue.
Iteration continues until the longest iterable is exhausted. 
'''
#consider the following two lists
fruits=["apple","mango","pineapple","grapes","cherry"]
price=[220.05, 185.25, 125.35]
for fv,pv in itertools.zip_longest(fruits,price,fillvalue='-'):
    print(fv,pv)

print("\n\n\n")
#Other functions in itertools
lst1=[1,2,3,4,5,6]
print(list(itertools.accumulate(lst1)))
lst2=[7,8,9,10,11,12]
print(list(itertools.chain(lst1,lst2)))

   
#consider the following list of students
stu=["Ajay","Ashwin","Chandru","Dinesh","Mohan"]

#What if we actually need the indexes?
'''
For example, let’s say we’re printing student names along with their
roll numbers (based on list indexes).

We could use range(len(our_list)) and then lookup the index
'''

for index in range(len(stu)):
    print(index+1, stu[index])

print("\n\n\n")
#a more idiomatic way to accomplish this task is to use the enumerate function.
'''
Python’s built-in enumerate function allows us to loop over a list and retrieve
both the index and the value of each item in the list.

The enumerate function gives us an iterable where each element is a tuple that
contains the index of the item and the original item value.

This function is meant for solving the task of:

Accessing each item in a list (or another iterable)
Also getting the index of each item accessed

So whenever we need item indexes while looping, we should think of enumerate
'''

for index,name in enumerate(stu):
    print(index,name)
print("\n\n\n")

#to begin with 1 instead of 0, use / initialize the second para i.e. start=1

for index,name in enumerate(stu,start=1):
    print(index,name)
print("\n\n\n")



