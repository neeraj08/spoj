/*
PROGRAMMING-HURDLE

MNNIT Guyz doing programming found biggest hurdle to coding is its statement(so long ,story type...:P :P).for those this simple question is

just find out, for given n numbers what should be arrangement of numbers(so that their power is maximum)

1: for 4 5 6 
output is 6 5 4 because 4^(5^(6^1)) is max
means 6 is taken first(first number is powered with 1)

2:for 1 9 6
output is 1 9 6 because 6^(9^(1^1)) is max


Input :
The first line of input gives the number of cases, T. T test cases follow, each on a separate line. Each test case contains one positive integer n. then n integers.no two integers ahve same value

Output :
For each input case, you should output: n numbers proper arrangements so that power is max.

Limits
1 <= T <= 20
0 <= n <= 100000,numbers are less than 10^9


Input:
2
3
5 6 4
3
2 1 3

Output:
6 5 4
1 2 3
*/
#include<stdio.h>
int t,i,n;
int main()
{
long long int pow,max;
static int a,arr[100001];
scanf("%d",&t);
while(t--)
{
for(i=0;i<100001;i++)
arr[i]=0;
pow=max=1;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a);
arr[a]++;
}
for(i=1;i<3;i++)
if(arr[i])
printf("%d ",i);
for(i=100000;i>2;i--)
if(arr[i])
printf("%d ",i);
putchar('\n');
}
return 0;
}
