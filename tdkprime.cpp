#include<stdio.h>
bool a[180000000],*p,*q,*r,*sq;
int prime[5020000],pos=1;
int main()
{
int t,i,c,n,k,cnt=1;
p=a+3;
q=a+179999994;
sq=a+13420;
while(p<q)
	*p=1,p+=2;

prime[pos++]=2;
for(p=a+3;p<sq;p+=2)
{
	if(*p)
	{
		i=prime[pos++]=p-a;
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
		prime[pos++]=p-a;
	p+=y;
	if(*p)
		prime[pos++]=p-a;
}	
printf("pos=%d\n",pos);

scanf("%d",&t);
while(t--)
{
	scanf("%d",&i);
	printf("%d\n",prime[i]);
}
return 0;
}
