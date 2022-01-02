# name: 5_str.py
s = "we love python very much"
for w in s.split():
	print(w[1:], end = "")
	print(w[0], end = " ")
print()

for ch in s:
	print(ch, end = "")
	print('p', end = "")
print()


