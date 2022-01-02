# file : 6_list_build.py
# find the difference between successive elements of a list
fall_of_wickets = [10, 50, 100, 145, 150, 175]
n = len(fall_of_wickets)
partnership = []
# do n - 1 times
for i in range(n - 1) :
	partnership.append(fall_of_wickets[i + 1] - fall_of_wickets[i])
print("fall of wickets ")
for fall in fall_of_wickets:
	print(fall, end = " ")
print()
print("partnerships ")
for score in partnership:
	print(score, end = " ")
print()


