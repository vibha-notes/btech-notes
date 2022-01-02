#Lists in python
#List is a collection of objects
help(list)
print(dir(list))

#let us create a list 
#l=[]                    # two square brackets are used to create a list 
l=list()		#using list ctor to create list 	
print(l)              #empty list 
print(type(l))
print(id(l))

#let us create another list 
ll=[1,2,3,4,5]          #non-empty list or int list 
#what does the above line mean?
#is ll a list or ll points to a list ?
print(ll)		#ll points to a list of int elements 
print(id(ll))


#let us create another list --> an integer list 
lll=[1,2,3,4,5]

#two identical objects are equivalent but if they are equivalent, they are not necessarily identical
print(ll is lll)            #is ->identity operator
print(id(lll))              #ll and lll are equivalent -> have same ele, but not identical ->not same objects


#let us create another list via assignment
llll=lll                # llll and lll refer to same list object, assignment creates an alias
print(id(llll))     # id(lll) and id(llll) are same













