#print adajacent elements of the list
lst=[0,10,20,30,40]
for i in range(1,len(lst)):
    ele1=lst[i-1]
    ele2=lst[i]
    print(ele1,ele2)
    
#Accept a sequence of comma-separated numbers from console and
#generate a list. Perform few ops. 

n=input("enter a sequence of comma sep number")
l=n.split(",")
print(l)
#l=list(l)
#print(l)
for ele in l:
    ele=int(ele)
    print(type(ele))
print(l)

'''
in for ele in l:, in every iteration, ele is a (shallow) copy of the element
in the list l, So the change on the ele does nothing to list l's elements.
'''

for i in range(len(l)):
    l[i]=int(l[i])
print(l)


#Append common eles
L1=["p", "i", "t"]
L2=["t", "i", "p"]
comm=[]
for ele in L1:
    if ele in L2:
        comm.append(ele)
print(comm)

#list of items
L=["apple",2,442.0,"mango",1,125.2,"grapes",2,182.5]
#L=["apple",442.0,2,"mango",125.2,1,"grapes",182.5,2]
print(L[2::3])
#print(L[1::3])
sum_=0
for amt in L[2::3]: #[1::3]
    sum_+=amt
print(sum_)
    

L=[["apple",2,442.0],["mango",1,125.2],["grapes",2,182.5]]
sum_=0
for ll in L:
    for amt in ll[2::3]:
        sum_+=amt
print(sum_)


#topper's cgpa
cgpa=[8.2,7.2,8.3,9.01,9.2,7.2,9.2]
topper=cgpa[0]
for cgpa_i in cgpa[1::]:
    if cgpa_i>topper:
        topper=cgpa_i
print(topper)


#topper's cgpa
lst=[["abc","PESU001",7.8],["mno","PESU002",7.25],["lmn","PESU003",7.3], ["xyz","PESU004",8.2]]
topper_cgpa=lst[0][2]
for ll in lst:
    for cgpa in ll[2::]:
        if cgpa>topper_cgpa:
            topper_cgpa=cgpa
print(topper_cgpa)


#higgest and lowest cgpa
cgpa=[8.5,7.25,9.2,9.3,7.5]
hcgpa=lcgpa=cgpa[0]
for cgpa_i in cgpa[1::]:
    if cgpa_i>hcgpa:
        hcgpa=cgpa_i
    elif cgpa_i<lcgpa:
        lcgpa=cgpa_i
print(hcgpa,lcgpa)


#higgest and lowest cgpa
stu=[["abc",7.25,"pesu001"],["pqr",8.5,"pesu002",],["mno",7.15,"pesu003"]]
hcgpa=lcgpa=stu[0][1]
for stu_i in stu[1::]:
    for cgpa in stu_i[1::2]:
        if cgpa>hcgpa:
            hcgpa=cgpa
        elif cgpa<lcgpa:
            lcgpa=cgpa
print(hcgpa,lcgpa)

#higgest and lowest cgpa
stu=[["abc","PESU001",8.5],["pqr","PESU002",7.25],["mno","PESU003",9.#2],["xyz","PESU004",8.75]]
hcgpa=lcgpa=stu[0][2]
for stu_i in stu[1::]:
    for cgpa in stu_i[2::2]:
        if cgpa>hcgpa:
            hcgpa=cgpa
        if cgpa<lcgpa:
            lcgpa=cgpa
print(hcgpa,lcgpa)






    

