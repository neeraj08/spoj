s=raw_input()
z=0
l=len(s)
o=0
for i in range(l):
	if s[i]=='0':
		z+=1
	else:
		o+=1
rotate=1.0*z/l
#print "rotate",rotate

z=0
o=0
last='0';
if s[0]=='1':
	last='1'
shoot=0
for i in range(1,l):
	if s[i]=='0' and last=='0':
		z+=1
	elif s[i]=='1' and last=='0':
		o+=1
	last=s[i]
if(s[l-1]=='0' and s[0]=='0'):
	z+=1
if(s[l-1]=='0' and s[0]=='1'):
	o+=1

shoot=1.0*(z)/(z+o)
if shoot>rotate:
	print "SHOOT"
elif shoot<rotate:
	print "ROTATE"
else:
	print "EQUAL"

