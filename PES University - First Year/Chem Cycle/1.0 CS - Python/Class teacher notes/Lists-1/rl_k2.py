#given a list L consitsing of integers
#Write a python code snippet to return an list with
#the elements "rotated left" by n elements so [1, 2, 3] yields [2, 3, 1].
#or
#Shifts the elements of list to left by n indices.

L=[1,2,3,4,5,6]
n=int(input("Rotation by how many elements"))
L=L[n:]+L[:n]        #rotate left by 1
#L=L[-1:]+L[:-1]     #rotate right by 1
print(L)
