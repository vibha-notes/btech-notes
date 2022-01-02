#A sentinel value is a special value used to terminate a loop when reading data.

#prg1: to add set of ints till 0 is given as input
count = 0
sum   = 0
while True:
    score = int(input('Enter a Score (-1 to Terminate)'))
    if score == -1:
        break
    count += 1
    sum += score
if count != 0:				# Avoid /0 if sentinel entered first
    print('Average =', sum/count)
else:
    print('No scores to average')


'''Generally, we can tranform code of the form

while True:
    if some-test:
        break
    statements

into

while not(some-test):
    statements

'''


#Prg3: modified version of prg2

cnt=0
sum_=0
score = int(input('Enter a Score (-1 to Terminate)'))
while score!=-1:
    cnt+=1
    sum_+=score
    score = int(input('Enter a Score (-1 to Terminate)'))
if cnt != 0:				# Avoid /0 if sentinel entered first
    print('Average =', sum_/cnt)
else:
    print('No scores to average')


cnt=0
sum_=0
morescr=True
while morescr:
    scr=int(input('Enter a Score (-1 to Terminate)'))
    if scr!=-1:
        cnt+=1
        sum_+=scr
    else:
        morescr=False
if cnt != 0:				# Avoid /0 if sentinel entered first
    print('Average =', sum_/cnt)
else:
    print('No scores to average') 




a = 1
s = 0
print('Enter Numbers to add to the sum.')
print('Enter 0 to quit.')
while a != 0:                           
    print('Current Sum:', s)            
    a = float(input('Number? '))        
    s = s + a                            
print('Total Sum =', s)


