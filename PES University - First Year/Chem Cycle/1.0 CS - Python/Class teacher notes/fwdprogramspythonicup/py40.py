#str.join()
'''
The join function is a more flexible way for concatenating string.
With join function, you can add any character into the string.
Called on a "separator" string 'x', 'x'.join(y) joins every element in
the list y separated by 'x'.
'''
str1="python"
print(id(str1))
str2='.'.join(str1)
print(str2)
print(id(str2))
sep='.'
str3=sep.join(str1) 
print(str3)
print(id(str3))
'''
In the example below, str1 is declared at compile time.
On otherhand, str2 and str3 are produced at runtime
As a consequence, str1 will be interned whereas str2 and str3 will not.
'''

str4="Hello welcome to strings@python"
slst1=list(str4)         #convert to list 
print(slst1)
str5=str(slst1)          #fails converting back to original str 
print(str5)
str6=''.join(slst1)      #suceeds in conversion i.e. concatenates 
print(str6)
'''
NOTE: FOR THE ABOVE CASE
The method can also be called on the empty string '' as the separator.
The effect is the elements in the list joined together with nothing in between.
'''

#join with space 
slst2=["Audi","BMW","are","two","car","brands"]
print(slst2)
str7=str(slst2)
print(str7)
str8=' '.join(slst2)
print(str8)

#Joining can be done on any separator string
print('--'.join(slst2))
print('\t'.join(slst2))

#Join a list of numbers
ilst=[1,2,3,4,5]
print(str(ilst).strip('[]'))
print(str(ilst)[1:-1])
#convert elements to string using map
print(''.join(map(str,ilst)))


#join list with int and str 
islst = [1, 2, 3, 'a', 'b','c']
print(str(islst).strip('[]'))
print(''.join(map(str,islst)))









