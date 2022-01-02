#given a list L consitsing of integers
#Write a python code snippet to check whether
#an element K appears as either the first ele
#or the last element of L.

L=[1,2,3,6,7]
k=int(input("enter the ele"))
if L[0]==k or L[-1]==k:
    print("Yes")
else:
    print("No")
