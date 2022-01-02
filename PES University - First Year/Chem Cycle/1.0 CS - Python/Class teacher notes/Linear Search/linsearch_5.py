#Linear Search Version 5

L=[]
flag=0
pos=[]

#accept no. of eles
n=int(input("enter no of ele"))

#accept each of the ele and append  it to the list 
for i in range(0,n):
    ele=int(input("enter the ele"))
    L.append(ele)

#accept the probe / key ele to search
key=int(input("enter the probe ele to search"))

#start the search from L[0]....L[n-1] 
for index,val in enumerate(L):      #using enumerate
    if key==val:
        pos.append(index)   #append the index of probe (including duplicates)
        flag=1

#check flag and take appropriate action 
if flag:
    print("ele found at",pos)
else:
    print("ele not found")
