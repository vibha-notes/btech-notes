#matrix addition version 1

m=[[1,2],[3,4]]
n=[[3,4],[1,2]]
r=[[0,0],[0,0]]

for i in range(len(m)):
    for j in range(len(m[i])):
        r[i][j]=m[i][j]+n[i][j]

for i in r:
    print(i)

print(r)


#matrix addition version 2 

m=[[1,2],[3,4]]
n=[[3,4],[1,2]]
r=[]

for i in range(len(m)):
    row=[]
    for j in range(len(m[i])):
        row.append(m[i][j]+n[i][j])
    r.extend(row)

for i in r:
    print(i)
