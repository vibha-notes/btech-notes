#loop control structures

#print list of natural numbers 1,2,3,4...,n



'''Conceptually, we distinguish two types of loops, which differ in the way in which the number of iterations (i.e., repetitions of the body of the loop) is determined:

In definite loops, the number of iterations is known before we start the execution of the body of the loop.
Example: repeat for 10 times printing out a *.

In indefinite loops, the number of iterations is not known before we start to execute the body of the loop, but depends on when a certain condition becomes true (and this depends on what happens in the body of the loop)
Example: while the user does not decide it is time to stop, print out a * and ask the user whether he wants to stop.
'''

#while stmt
#structure of while stmt
'''
initialization
while continuationCondition :
    do main action to be repeated
    prepare variables for the next time through the loop

leader:
    suite
'''

'''
#prg1 : An infinite loop

i=1
n=5
while i<n:
    print(i)    
i=i+1

'''

#prg2: Correct version

i=1
n=5
while i<=n:
    print(i)    
    i=i+1

#prg2: Correct version

i=1
n=5
while i<=n:
    print(i)    
    i=i+1


#prg3:fall thorugh
i=1
n=5
while i<=n:
    print(i,end=" ")    
    i=i+1
print("\ndone!!!")

#prg4: print first n even natural numbers
i=2
n=40
while i<=n:
    print(i,end=" ")
    i+=2
print("\ndone!!!")

#prg5: print first n even natural numbers and sum 
i=2
n=40
s=0
while i<=n:
    print(i,end=" ")
    i+=2
    s+=i
print(f"\nsum of even natural numbers upto {n} is",s)


#prg6: print first n even natural numbers their sum and average 
i=2
n=40
s=0
cnt=0
while i<=n:
    print(i,end=" ")
    i+=2
    s+=i
    cnt+=1
print(f"\nsum of even natural numbers upto {n} is",s)
print(f"\navg of even natural numbers upto {n} is",s//cnt)


#prg7: single line suites in python
i=1
n=5
while i<=n: print(i,end=" ");i+=1;
print("\ndone")


#prg8: Let’s say you have two numbers: -20 and 20. You want to compare these numbers and
#increase the negative number’s count so that it is the same as the positive number’s.
x=-20
y=20
while x<=y:
    print("x is now: ",x)
    x=x+1

#prg9:But in the above case what if we want to print “X is negative”
#as long as x is less than 0?
x=-20
y=20
while x<=y:
    while x<0:
        print("x is negative")
        x=x+1
    print("x is now: ",x)
    x=x+1


#prg9:But in the above case what if we want to print “X is negative”
#as long as x is less than 0?
x=-20
y=20
while x<=y:
    while x<0:
        print("x is negative")
        x=x+1
    print("x is now: ",x)
    x=x+1

print("\n\n\n")

#prg10:else with while 
x=-20
y=20
while x<=y:
    while x<0:
        print("x is negative")
        x=x+1
    else:
        print("x is now: ",x)
        x=x+1
    

#prg11: infinite loop 

'''while True:
    pass
'''
#prg12: Reverse an integer

n=int(input("enter an int"))
rev=0
while n:
    r=n%10
    rev=rev*10+r
    n//=10

print(rev)

#or 

n=int(input("enter an in"))
rev=0
while n :
	rev = rev * 10 + n % 10
	n //= 10
print("reverse number : ", rev)

#Unlike a lot of other computer languages, Python allows you to use an else
#statement in conjunction with a while statement.
#When a while statement finishes its loop naturally, it will then execute the
#else statement. If the while statement stops prematurely for any reason,
#it will not execute the else statement.

n=0
while n != 10:
    print(n)
    n+=1    
else:
    print("done")


'''
while True:pass
else:print("done")
'''

'''
#infinite loop

n = 10
answer = 1
while n > 0:
    answer = answer + n
    n = n + 1
print(answer)
'''

#What is printed by this code?
n = 1
x = 2
while n < 5:
    n = n + 1
    x = x + 1
    n = n + 2
    x = x + n
print(n, x)

#Assignment: Consider a do-while example from C. Emulate the same in Python
'''
int i = 1;
do{
  printf("%d\n", i);
  i = i + 1;
} while(i <= 3);
'''

i = 1
while True:
    print(i)
    i = i + 1
    if(i > 3):
        break



 


