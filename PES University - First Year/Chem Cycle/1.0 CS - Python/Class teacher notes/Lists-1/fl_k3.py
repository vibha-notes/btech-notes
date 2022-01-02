#given a list L consitsing of integers
#Write a python code snippet to check whether
#an element K appears as either the first ele
#or the last element of L.
#print an appropriate message stating whether ele
#is first or last ele
#first occurrence based 

L=[1,2,3,6,7,8,6]          
k=int(input("enter the ele"))
if L[0]==k: 
    print("Yes!! First ele")
elif L[-1]==k:
    print("Yes!! Last ele")
else:
    print("Neither first nor last")
