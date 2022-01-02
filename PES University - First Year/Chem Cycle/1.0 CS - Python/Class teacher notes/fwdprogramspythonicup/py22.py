'''
Bitwise operators are operators that work on multi-bit values,
but conceptually one bit at a time.

AND is 1 only if both of its inputs are 1, otherwise it's 0.
OR is 1 if one or both of its inputs are 1, otherwise it's 0.
XOR is 1 only if exactly one of its inputs are 1, otherwise it's 0.
NOT is 1 only if its input is 0, otherwise it's 0.

These can often be best shown as truth tables. Input possibilities are on the top and left,
the resultant bit is one of the four (two in the case of NOT since it only has one input)
values shown at the intersection of the inputs.

AND | 0 1     OR | 0 1     XOR | 0 1    NOT | 0 1
----+-----    ---+----     ----+----    ----+----
 0  | 0 0      0 | 0 1       0 | 0 1        | 1 0
 1  | 0 1      1 | 1 1       1 | 1 0
One example is if you only want the lower 4 bits of an integer, you AND it with 15
(binary 1111)so:

    201: 1100 1001
AND  15: 0000 1111
------------------
 IS   9  0000 1001
 
The zero bits in 15 in that case effectively act as a filter, forcing the bits in the
result to be zero as well.
'''

#number in decimal 
x=85                    #bin = 0000 0000 0101 0101
y=1                     #bin = 0000 0000 0000 0001
                        #--------------------------
print(x&y)              #bin = 0000 0000 0000 0001


x=85                    #bin = 0000 0000 0101 0101
y=1                     #bin = 0000 0000 0000 0001
                        #--------------------------
print(x|y)              #bin = 0000 0000 0101 0101


x=85                    #bin = 0000 0000 0101 0101
y=1                     #bin = 0000 0000 0000 0001
                        #--------------------------
print(x^y)              #bin = 0000 0000 0101 0100



#numbers can be given in hexadecimal
x=0x55                  #dec = 85,  bin =0000 0000 0101 0101
y=0xf0                  #dec = 240, bin =0000 0000 1111 0000
                        #------------------------------------
print(x&y)      #0x50    dec=80     bin =0000 0000 0101 0000



'''
In addition, >> and << are often included as bitwise operators, and they "shift" a value
respectively right and left by a certain number of bits, throwing away bits that roll of the
end you're shifting towards, and feeding in zero bits at the other end.

So, for example:

1001 0101 >> 2 gives 0010 0101
1111 1111 << 4 gives 1111 0000
'''

x = 42;       #          101010
y = x << 1;   #         1010100 ( 84 = 42 * 2) i.e.42x2^1
z = x << 3;   #       101010000 (336 = 42 * 8) i.e.42x2^3
print(x,y,z)


x = 42;       #          101010
y = x >> 1;   #         1010100 ( 84 = 42 // 2) i.e.42//2^1
z = x >> 3;   #       101010000 (336 = 42 // 8) i.e.42//2^3
print(x,y,z)



