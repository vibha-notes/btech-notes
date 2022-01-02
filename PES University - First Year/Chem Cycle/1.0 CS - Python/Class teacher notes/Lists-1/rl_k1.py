#given a list L consitsing of integers
#Write a python code snippet to return an list with
#the elements "rotated left" so [1, 2, 3] yields [2, 3, 1].

L=[1,2,3]
L=L[1:]+L[:1]       #rotate left by 1
#L=L[-1:]+L[:-1]     #rotate right by 1
print(L)
