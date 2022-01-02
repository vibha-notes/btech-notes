#given two lists L1 and L2 consitsing of integers
#Write a python code snippet to check whether
#if they are equivalent lists.

L1=[1,2,3]
L2=[1,3,2]
if len(L1) == len(L2):
    if L1[::1]==L2[::1]: 
        print("Yes!! equivalent lists")
    else:
        print("No!! not equivalent lists")
else:
    print("len does not match")
