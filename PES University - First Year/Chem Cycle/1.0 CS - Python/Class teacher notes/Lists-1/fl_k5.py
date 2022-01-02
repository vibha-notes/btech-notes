#given a list L consitsing of integers
#Write a python code snippet to check whether
#an element K appears as both the first ele
#and the last element of L.

L=[6,1,2,3,6,7,8,6]
n=len(L)
k=int(input("enter the ele"))
if L[0]==k and L[n-1]==k: 
    print("Yes!! First and last ele")
else:
    print("No")
