/*to find first n primes while checking divisibility only with preiously found primes
at beginning we know that 2 is a prime
author	--> NEERAJ LAKHOTIA
date	--> 28 JAN 2012
*/
#include <stdio.h>
int main()
{
unsigned int n,i,j,cnt=0,nums=3;	//'cnt'=count of prime numbers found. nums will represent number to be checked
printf("Enter n\n");
scanf("%d",&n);
unsigned int p[n];	//'p' for prime.this array will have a record of all primes numbers found
p[cnt++]=2;	//at starting we know that 2 is a prime
printf("%d \t",p[cnt]); //print "2" , the first prime number
while(cnt<n)
{
	for(i=0;i<cnt;i++)
		if((nums%p[i])==0)
			break;
	if(i==cnt)	//i.e.   if no number could divide 'nums' and therefore the loop could run till 'cnt'
		printf("\t %d",p[cnt++]=nums);	//store the prime number in array 'p[]' and print it
	nums+=2;
}
puts("");
return 0;
}
