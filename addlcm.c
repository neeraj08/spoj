//spoj ADDLCM
//10 APR 2012
#include <stdlib.h>
#include <stdio.h>
long int lcm(int,int);
int main()
{
int b,t,i,j;
long int *res;
scanf("%d",&t);
res=(long int *)malloc(t*sizeof(long int));
for(i=0;i<t;i++)
{
	res[i]=0;
	scanf("%d %d",&j,&b);
	for(;j<=b;j++)
	res[i]+=lcm(j,b);
}
for(i=0;i<t;i++)
printf("%ld\n",res[i]);
return 0;
}

long int lcm(int a,int b)
{
long int res=b;
while(res%a!=0)
res+=b;
return res;
}
