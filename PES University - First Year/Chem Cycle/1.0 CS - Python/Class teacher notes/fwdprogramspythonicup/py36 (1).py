str1="hello,my|name+is-bob"
str2=str1.split()
sep=",", "|", "+", "-"
for char in sep:
    str3=[]
    for substr in str2:
        str3.extend(substr.split(char))
    str2=str3
print(str2)

