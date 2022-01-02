# Write a code snippet that generates a list of random int of length n
# between 0 to 100 and prints a new list containing elements except
# boundray elements.


import random
n=int(input("Enter the length of the list"))
L=random.sample(list(range(100)),n)
print(L)
print(type(L))
print(list((L[1:-1])))


