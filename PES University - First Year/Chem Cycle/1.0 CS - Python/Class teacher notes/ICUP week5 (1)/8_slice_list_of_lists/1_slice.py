# file 1_slice.py
# indices:
#    0    1   2   3   4   5   6
b = [12, 23, 34, 45, 56, 67, 78]
print(b[2:5])
print(b[:5]) # b[0:5]
print(b[2:]) # b[2:len(b)]
print(b[2:6:2]) # init : 2, final value one past the end : 6; step 2
print(b[::2])  # init : 0, final value one past the end : len(list); step : 2

print(b[::-1])  # reverse the elements of the list
print("what : ", b[:5:-1])

