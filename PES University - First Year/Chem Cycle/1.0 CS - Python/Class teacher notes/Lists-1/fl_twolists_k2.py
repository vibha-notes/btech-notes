#given two lists L1 and L2 consitsing of integers
#Write a python code snippet to check whether
#if they have the same first element and they have the same last element.
#Both lists will be length 1 or more.

L1=[1,2,3]
L2=[1,3]
if L1[0]==L2[0] and L1[-1]==L2[-1]: 
    print("Yes!! First and last eles  are same in both the lists")
else:
    print("Either first / last ele is different in the lists")
