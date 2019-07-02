import re
s=0
fhand=open("negi1.txt")
for lines in fhand:
	lines=lines.rstrip()
	y=re.findall(r'\b\d+\b',lines)
	for i in range(len(y)):
		#print(y[i])
		y[i]=int(y[i])
	s+=sum(y)
	del y[:]
print(s+11)

