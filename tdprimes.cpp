#include<stdio.h>
bool a[100000000],*p,*q,*r,*sq;
int main()
{
int i,c,n,k;
p=a-1;
q=a+100000000;
sq=a+10000;
while(++p<q)
	*p=1;
c=0;
putchar('2');
putchar(' ');
for(p=a+3;p<sq;p+=2)
{
	if(*p)
	{
		if(++c==100)
		{
			c=0;
			//self method for printing integers without printf()
			n=p-a;
			k=100000000;
			while(n/k==0)k/=10;
			while(k)
			{
				putchar(48+n/k);
				//n%=k;//
				n=n-n/k*k;
				k/=10;
			}
			putchar(' ');
		}
		i=p-a;
		r=a+i*i;
		i<<=1;
		while(r<q)
		{
			*r=0;
			r+=i;
		}	
	}
}

for(;p<q;p+=2)
if(*p)
{
	if(++c==100)
	{
		//self method for printing integers without printf()
		c=0;
		n=p-a;
		k=100000000;
		while(n/k==0)k/=10;
		while(k)
		{
			putchar(48+n/k);
			//n%=k;
			n=n-n/k*k;
			k/=10;
		}
		putchar(' ');
	}
}return 0;
}
