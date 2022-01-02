#What do you think will happen if we type the following into Python?
#print(1//0) #ZeroDivisionError: integer division or modulo by zero

#But what about this expression?
print(True or 1//0)         #It evaluates to True

#Why true?
#It evaluates to True because Python's and and or operators short-circuit.
#That is, they don't necessarily evaluate every operand.

#print(False or 1//0)       #ZeroDivisionError
print(False and 1//0)       #False 
#print(True and 1//0)        #ZeroDivisionError

#What is short circuit evaluation?
#To speed up boolean evaluations, Python uses short-circuit evaluations.
#It means that boolean evaluation may stop if one of its expression is False.
#For instance the expression  False and X  is always False and X is never evaluated.

#In simple words

#When there is an expression with several adjacent and expressions, python moves from
#left to right (that's the associativity in action) but stops when it comes to the first False.
#False and anything is False so why keep evaluating expressions?

#When there is an expression that has more several adjacent or expressions, python moves from
#left to right (that's the associativity in action) but stops when it comes to the first True.
#True or anything is True so why keep evaluating expressions?

print(True and "Ok" or "Ko")        #Ok

#here True and "OK" is True. There is not need to test or "KO", so this is the end of the
#logical test, and the returned value is the one that has been evaluated last in True and "OK"

print(False and "ok" or "ko")       #ko
#False and "OK" is False. So, or "KO" must be evaluated.
#So, the last evaluated expression is "KO", hence the returned value.

#Returned values
#Thus in logical test (as above), the returned value is the one that has been evaluated last.

#Special Notes on Logical operators
#x and y	Returns x if x is False, y otherwise
#x or y	        Returns y if x is False, x otherwise


#and --> if all values are True, returns the last evaluated value.
#        if any value is false, returns the first one.
#or --> returns the first True value.
#       if all are False, returns the last value


print(1==1 or 1==2)         #True

num=10
print(num==5 or 6 or 7)     #6

#Truthiness
#By default, an object is considered true unless its class defines either a __bool__() method
#that returns False or a __len__() method that returns zero, when called with the object.

print(bool('PESU'))
print(bool(1))
print(bool(1.25))
print(bool([]))
print(bool("[]"))

#Python begins by evaluating 10 == 5, which turns into False.
#Next up, it evaluates 6. As all non-zero numbers are truthy
#At this point, Python stops and says: hey, I found something truthy!
#And that’s what the entire expression evaluates to. The answer is 6

print(False or [])                   #[]
print(2 or False)                   #2
print(False or 0 or "hello")        #hello

print(False or 0)                   #if everything in an OR is falsey, then the whole or
                                    #expression will evaluate to the rightmost sub-expression


print('cat' and 'dog')              #if everything in an AND is truthy, then the whole or
                                    #expression will evaluate to the rightmost sub-expression


num=7
print(5 <= num <=7)                 #True

print(num == (5 or 6 or 7))         #False

#The above is evaluated as follows
print(5 or 6 or 7)                  #5
print(num == 5)                     #False


a,b=10,20
min=a<b and a or b
print(min)
min=n1 if n1<n2 else n2
print(min)
