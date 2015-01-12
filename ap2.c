#include <stdio.h>
int main()
{
int t;
unsigned long long int i,j,a,b,c,N,A;
long long int D;
scanf("%d",&t);
while(t--)
{
scanf("%llu %llu %llu",&a,&b,&c);
if(a==b){N=c/a;printf("%llu\n",N);for(i=1;i<N;i++)printf("%llu ",a);printf("%llu\n",a);}
else
{
N=(2*c)/(a+b);
D=(b-a)/(N-5);
A=a-2*D;
printf("%llu\n",N);
for(j=1;j<N;j++,A+=D)
printf("%llu ",A);
printf("%llu\n",A);
}
}
return 0;
}
