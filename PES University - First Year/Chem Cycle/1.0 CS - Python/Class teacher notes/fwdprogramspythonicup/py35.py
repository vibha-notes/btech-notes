#load text
fn='metamorphosis_clean.txt'
fo=open(fn,'r')
text=fo.read()
fo.close()
words=text.split()
print(words[:10])
print(words[50:100])
import string
print(string.punctuation)
table=str.maketrans('','',string.punctuation)
strippedpun = [w.translate(table) for w in words]
print(strippedpun[50:100])
