#include<stdio.h>
int main()
{
unsigned int t,n,m,i,r,a,b,A,D,N;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&n,&m);
//for(a=1;a<n;a++)
//for(b=a+1;b<=n;b++)
//if((a+b)%m==0)
//r++;
r=0;
A=m;
D=m;
N=(2*n-1)/m;
r=(N*(2*A+(N-1)*D)/2)/2;
printf("r is %d\n",r);
r-=N;
printf("r is %d\n",r);
r+=m&1;
printf("%d\n",r);
}
return 0;
}
