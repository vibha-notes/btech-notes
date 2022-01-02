# Write a code snippet that generates a list of random int of length n
# between 0 to 100 and prints a new list containing all elements with
# elements of position p and q being swapped.

# [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]  # list l
#  ^  ^  ^  ^  ^  ^  ^  ^  ^  ^
#  0  1  2  3  4  5  6  7  8  9    # respective index of the elements

#l[0]  l[2]  l[4]  l[6]  l[8]      # first tier : start=0, step=2

#   l[1]  l[3]  l[5]  l[7]  l[9]   # second tier: start=1, step=2
#-----------------------------------------------------------------------
#l[1]  l[3]  l[5]  l[7]  l[9]
#   l[0]  l[2]  l[4]  l[6]  l[8]   # desired output

import random
n=int(input("Enter the length of the list"))
L=random.sample(list(range(100)),n)
p=int(input("Enter the pos p"))
q=int(input("Enter the pos q"))
print(L)
print(type(L))
L[p], L[q] = L[q], L[p]
print(L)




