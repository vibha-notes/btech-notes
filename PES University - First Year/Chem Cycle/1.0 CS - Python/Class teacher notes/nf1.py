# program1

# converting a nested list  to flat list
# nl=[[1,2,3],[4,5,6]] --> Nested list 
# fl =[1,2,3,4,5,6] --> flat list

# Version -1
nl=[[1,2,3],[4,5,6]]
fl=[]
for sl in nl:
        fl.extend(sl)
print(nl)
print(fl)

# Version -2
nl=[[1,2,3],[4,5,6]]
fl=[]
for sl in nl:
    for ele in sl:
        fl.append(ele)
print(nl)
print(fl)



# program2

# converting a nested list  to flat list
# nl=[[1,2,3],[4,5,6],7] --> Nested list 
# fl =[1,2,3,4,5,6,7] --> flat list

# Version -1
nl=[[1,2,3],[4,5,6],7]
fl=[]
for sl in nl:
    if type(sl) == list:
        fl.extend(sl)
    else:
        fl.append(sl)
print(nl)
print(fl)


# Version -2
nl=[[1,2,3],[4,5,6],7]
fl=[]
for sl in nl:
    if type(sl)==list:
        for ele in sl:
            fl.append(ele)
    else:
        fl.append(sl)
print(nl)
print(fl)



