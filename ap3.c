#include<stdio.h>
unsigned long long int sq(unsigned long long int);
int main()
{
int t;
unsigned long long int c1,c2,c3,n,a,s,i,A,B,C;
long long int d;
scanf("%d",&t);
while(t--)
{
scanf("%llu %llu %llu",&c1,&c2,&c3);
if(c1==c2)
{
n=c3/c1;
printf("%llu\n",n);
for(i=1;i<n;i++)
printf("%llu ",c1);
printf("%llu\n",c1);
}
else
{
A=c1+c2;
B=(7*c1+5*c2+2*c3);
//49c1^2+25c2^2+4c3^2+70c1c2-20c1c3-28c2c3
//
//
C=12*c3;

//printf("c3 is %llu and 12*c3 is %llu\n",c3,12*c3);


//printf("\tA->%lld\tB->%lld\tC->%lld\n",A,B,C);
n=(1.0*(7*c1+5*c2+2*c3)/A+sq(49.0*c1/A*c1/A+25.0*c2/A*c2/A+4.0*c3/A*c3/A-20.0*c1/A*c3/A-28.0*c2/A*c3/A+70.0*c1/A*c2/A))/(2);
printf("%llu\n",n);
if(c2>c1)d=(c2-c1)/(n-6);
else{d=(c1-c2)/(n-6);d=-d;}
//printf("\td is %lld\n",d);
a=c1-2*d;
for(i=0;i<n-1;i++)
printf("%llu ",a+i*d);
printf("%llu\n",a+(n-1)*d);
}
}
return 0;
}
unsigned long long int sq(unsigned long long int n)
{
unsigned long long int i,j,k=100000000,sq=0;
while(k)
{
for(sq+=k;sq*sq<=n;sq+=k);
sq-=k;
k/=10;
}
return sq;
}
