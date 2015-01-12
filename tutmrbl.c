#include<stdio.h>
int main()
{
static int s[4005],i,j,c,N,n,r;
for(i=3;i<=65;i+=2)
{
if(s[i]==0)
{
for(j=i*i;j<4000;j+=i+i)
s[j]=1;
}
}//prime sieve completed for numbers<4000
s[c++]=2;
for(i=3;i<4000;i+=2)
if(!s[i])
s[c++]=i;//primes till 4000 shifted to left end of array in order
//there are c prime numbers(0 to c-1) in the array s[]
while(scanf("%d",&N),N)
{
n=N;
i=0;r=1;
while(i<c && N%s[i])i++;
if(i==c)//if N is a prime > 4000
printf("%d = %d\n",N,N);
else
{
printf("%d = %d",n,s[i]);
N/=s[i];
while(i<c && N>1)
{
while(N%s[i]==0){N/=s[i];printf(" * %d",s[i]);r++;}//prime factorization
i++;
}

if(N>1)printf(" * %d",N);
putchar('\n');
}
printf("With %d marbles, %d different rectangles can be constucted.\n",n,r);
}
return 0;
}
