#given a list L consisting of integers
#Write a python code snippet to check whether
#an element K appears as the first ele
#or the last element of L and is even ele or odd ele.

L=[1,2,3,6,7,8,5]
k=int(input("enter the ele"))
if L[0]==k: 
    print("Yes!! First ele")
    if L[0]%2:
        print("odd")
    else:
        print("even")
elif L[-1]==k: 
    print("Yes!! last ele")
    if L[-1]%2:
        print("odd")
    else:
        print("even")
else:
    print("No")
