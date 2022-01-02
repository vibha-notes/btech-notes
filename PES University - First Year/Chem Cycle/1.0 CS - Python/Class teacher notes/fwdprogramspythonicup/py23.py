#find sum of eles of a list:
#approach 1
lst=[12,13,45,567,78]
sum_=0
for ele in lst:
    sum_+=ele
print(sum_)

#approach 2
lst=[12,13,45,567,78]
sum_=0
i=0
while i<len(lst):
    sum_+=lst[i]
    i+=1
print(sum_)

#approach 3
lst=[12,13,45,567,78]
print(sum(lst))

print()
#find sum of eles of lists:
lst=[[1,2,3],[4,5,6],[7,8,9]]
for ele in lst:
    sum_=0
    for sele in ele:
        sum_+=sele
    print(sum_)

print()
#find the max sum in the list
#approach 1
'''
We can traverse in the lists inside the list and sum up all the elements
in a given list and by max function get the maximum of sum of all
elements in lists of list.
'''
#lst=[[1,2,3],[4,5,6],[7,8,9]]
lst = [[1, 2, 3], [4, 5, 6], [10, 11, 12], [7, 8, 9]]
maxs=0
for ele in lst:
    sum_=0
    for sele in ele:
        sum_+=sele
    #print(sum_)
    maxs=max(sum_,maxs)     #using max()
print(maxs)

#approach 2
'''
Traverse in the outer list only, and sum all elements in the inner lists by
using sum() function, find the sum of all the lists and get the maximum of all
the sum calculated.
'''

lst = [[1, 2, 3], [4, 5, 6], [10, 11, 12], [7, 8, 9]]
maxs=0
for ele in lst:
    maxs=max(sum(ele),maxs)
print(maxs)


#find leftmost even number if any in the list

lst=[21,25,23,28,30]
i=0
found=False
while not found and (i<len(lst)):
    if lst[i]%2==0:
        found=True
    else:
        i+=1
if found:
    print("found ", lst[i])
else:
    print("not found")


print()
#find rightmost even number if any in the list

lst=[20,25,29,21,13,17]
i=len(lst)-1
found=False
while not found and (i>=0):
    print(lst[i])
    if lst[i]%2==0:
        found=True
    else:
        i-=1
if found:
    print("found ", lst[i])
else:
    print("not found")


#sum and average of n ele of list
#version 1
n=int(input("enter the limit"))
sum_=0
lst=[]
for i in range(n):
    ele=int(input ("enter an int"))
    lst.append(ele)
print(lst)
for ele in lst:
    sum_+=ele
print(sum_)

#version 2
lst=[]
sum_=0
cntnos=int(input("enter the limit"))
for i in range(cntnos):
    num=int(input("enter the number"))
    lst.append(num)
    sum_+=lst[i]
    #lst.insert(i, num)
    #lst.extend(list([num]))
print(lst)
print(sum_)
    

#version 3
lst=[]
sum_=0
cntnos=int(input("enter the limit"))
for i in range(cntnos):
    num=int(input("enter the number"))
    #lst.append(num)
    lst.insert(i, num)
    #lst.extend(list([num]))
for ele in lst:
    sum_+=ele
print(sum_)



lst=[21,25,23,28,30]
print(*lst,end= " ")

