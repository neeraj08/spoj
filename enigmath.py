import sys;
a,b=0,0
def gcd(a,b):
	if b==0:
		return a
	return gcd(b,a%b)
t=int(raw_input())
for i in range(t):
	a=int(input())
	b=int(input())
	g=gcd(a,b)
	print b/g,a/g

