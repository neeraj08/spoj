#include<stdio.h>
bool a[100000000],*p,*q,*r,*sq;
int main()
{
int i,c,n,k;
p=a+3;
q=a+100000000;
sq=a+10000;
while(p<q)
	*p=1,p+=2;
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
			printf("%d ",int(p-a));
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

int x,y;
x=p-a+2;
if(x%3==0)
x=4,y=2;
else
x=2,y=4;
for(;p<q;)
{
	p+=x;
	if(*p)
	{
		if(++c==100)
		{
			//self method for printing integers without printf()
			c=0;
//			printf("%d ",int(p-a));
		}
	}
	p+=y;
	if(*p)
	{
		if(++c==100)
		{
			//self method for printing integers without printf()
			c=0;
//			printf("%d ",int(p-a));
		}
	}

}
return 0;
}
