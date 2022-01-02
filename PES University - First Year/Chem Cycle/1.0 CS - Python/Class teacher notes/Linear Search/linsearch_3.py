#Linear Search Version 3
L=[]
flag=0
pos=0

#accept no. of eles
n=int(input("enter no of ele"))

#accept each of the ele and append  it to the list 
for i in range(0,n):
    ele=int(input("enter the ele"))
    L.append(ele)

#accept the probe / key ele to search
key=int(input("enter the key ele to search"))

#walk through the list from L[0]....L[n-1] --> linear search 
for index,val in enumerate(L):          #using enumerate so pos not required
    if key==val:
        flag=1
        break
    
#check flag and take appropriate action 
if flag:
    print("ele found at %d" %index)
else:
    print("ele not found")
