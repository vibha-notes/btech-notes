#given a list L consitsing of integers
#Write a python code snippet to check whether
#an element K appears as either the first ele
#or the last element of L.
#print an appropriate message stating whether ele
#is first or last ele

L=[6,1,2,3,6,7,8,6]
n=len(L)            
k=int(input("enter the ele"))
#if L[0]==k or L[len(L)-1]==k: #TypeError:len func is not subscriptable 
if L[0]==k: 
    print("Yes!! First ele")
elif L[n-1]==k:
    print("Yes!! Last ele")
else:
    print("Neither first nor last")
