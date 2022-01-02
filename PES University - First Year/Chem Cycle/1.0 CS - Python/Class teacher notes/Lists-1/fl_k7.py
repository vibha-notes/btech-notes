#given a list L consitsing of integers
#Write a python code snippet to check whether
#an element K appears as both the first ele
#and the last element of L and is even ele or odd ele.

L=[5,1,2,3,6,7,8,5]
k=int(input("enter the ele"))
if L[0]==k and L[-1]==k: 
    print("Yes!! First and last ele")
    if L[0]%2:
        print("odd")
    else:
        print("even")
else:
    print("No")
