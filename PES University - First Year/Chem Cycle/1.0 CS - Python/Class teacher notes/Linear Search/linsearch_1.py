#Linear Search Version 1
L=[]

#accept no. of eles
n=int(input("enter no of ele"))

#accept each of the ele and append  it to the list 
for i in range(0,n):
    ele=int(input("enter the ele"))
    L.append(ele)

#accept the probe / key ele to search
key=int(input("enter the key ele to search"))

#walk through the list from L[0]....L[n-1] --> linear search 
for i in range(0,n):
    if key==L[i]:
        print("ele found ") 
    else:
        print("ele not found")

# from the output we see that a complete walk through the list is done
# However, prints found and not found status
# Needs slight modification and is done in version 2
