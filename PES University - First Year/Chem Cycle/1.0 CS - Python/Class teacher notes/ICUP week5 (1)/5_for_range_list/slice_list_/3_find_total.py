# file : 3_find_total.py
# find the total of a batsman
# list contains the name of the batsman and his scores in # of innings
# find the total score of Kohli
scores = [ "kohli", 0, 82, 25, 120, 76]
total = 0
for e in scores[1:]:
	total += e
print("total : ", total)
