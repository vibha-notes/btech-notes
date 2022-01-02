# Write a code snippet that generates a list of random int of length n
# between 0 to 100 and prints a new list of length 2
# containing the first and last elements from the original list.
# The original list will be length 1 or more.

import random
n=int(input("Enter the length of the list"))
L=random.sample(list(range(100)),n)
print(L)
print(type(L))
print(list((L[0],L[-1])))


