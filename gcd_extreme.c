/*
	My submissions 	All submissions 	Best solutions 	PS 	PDF 	Back to list
SPOJ Problem Set (classical)
3871. GCD Extreme
Problem code: GCDEX

Given the value of N, you will have to find the value of G. The meaning of G is given in the following code

G=0;

for(k=i;k< N;k++)

for(j=i+1;j<=N;j++)

{

G+=gcd(k,j);

}

Here gcd() is a function that finds the greatest common divisor of the two input numbers
Input

The input file contains at most 20000 lines of inputs. Each line contains an integer N (1<1000001). the="" meaning="" of="" n="" is="" given="" in="" problem="" statement.="" input="" terminated="" by="" a="" line="" containing="" single="" zero.="" Output <1000001).>

For each line of input produce one line of output. This line contains the value of G for the corresponding N. The value of G will fit in a 64-bit signed integer.
Example

Input:
10
100
200000
0

Output:
67
13015
143295493160

Time limit has been changed. Some AC solutions get TLE
*/
#include <stdio.h>
long int gcd(long int,long int);
int main()
{
register long int i,j,k;
long int N,G[200000];
for(i=0;i<200000;i++)
{
scanf("%ld",&N);
if(N==0)
break;
for(k=i;k< N;k++)
for(j=i+1;j<=N;j++)
{
G[i]+=gcd(k,j);
}
}//for in i ends
for(j=0;j<i;j++)
printf("%ld\n",G[j]);
return 0;
}
long int gcd(long int a,long int b)
{
if(a%b==0)
return b;
return gcd(b,a%b);
}
