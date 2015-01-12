/*to find all prime numbers less than a given number using "sieve of Erastosthenes" method
author	--> NEERAJ LAKHOTIA
date	--> 28 JAN 2012
*/
#include <stdio.h>
int main()
{
unsigned int i,j,N;
printf("Enter N (All primes <=N will be displayed)\n");
scanf("%d",&N);
unsigned int a[N+1];
printf("All primes <=%d are\n",N);
for(a[1]=0,i=2;i<=N;i++)
a[i]=1;				//1 indicates the number is prime . 0 indicates not prime
for(i=2;i<=N/2;i++)
for(j=2;j<=N/i;j++)
a[i*j]=0;
for(i=1;i<=N;i++)
if(a[i])
printf(" \t%d",i);
puts("");
return 0;
}
