/*
10232. Distinct Primes
Problem code: AMR11E

 
Arithmancy is Draco Malfoy's favorite subject, but what spoils it for him is that Hermione Granger is in his class, and she is better than him at it.  Prime numbers are of mystical importance in Arithmancy, and Lucky Numbers even more so. Lucky Numbers are those positive integers that have at least three distinct prime factors; 30 and 42 are the first two. Malfoy's teacher has given them a positive integer n, and has asked them to find the nth lucky number. Malfoy would like to beat Hermione at this exercise, so although he is an evil git, please help him, just this once.  After all, the know-it-all Hermione does need a lesson.
Input (STDIN):
The first line contains the number of test cases T. Each of the next T lines contains one integer n.
Output (STDOUT):
Output T lines, containing the corresponding lucky number for that test case.
Constraints:
1 <= T <= 20
1 <= n <= 1000
Time Limit: 2 s
Memory Limit: 32 MB
Sample Input:
2
1
2
Sample Output:
30
42

 

Arithmancy is Draco Malfoy's favorite subject, but what spoils it for him is that Hermione Granger is in his class, and she is better than him at it.  Prime numbers are of mystical importance in Arithmancy, and Lucky Numbers even more so. Lucky Numbers are those positive integers that have at least three distinct prime factors; 30 and 42 are the first two. Malfoy's teacher has given them a positive integer n, and has asked them to find the nth lucky number. Malfoy would like to beat Hermione at this exercise, so although he is an evil git, please help him, just this once.  After all, the know-it-all Hermione does need a lesson.

 

Input (STDIN):

The first line contains the number of test cases T. Each of the next T lines contains one integer n.

 

Output (STDOUT):

Output T lines, containing the corresponding lucky number for that test case.

 

Constraints:

1 <= T <= 20

1 <= n <= 1000

 

Sample Input:

2

1

2

 

Sample Output:

30

42
 */
#include <stdio.h>
int main()
{
register int i,j,num;
int t,pos=0,cnt=0,factors,max=0;
scanf("%d",&t);
int n[t];
for(i=0;i<t;i++)
{
scanf("%d",&n[i]);
if(n[i]>max)
max=n[i];
}
int res[max];
for(i=30;cnt<max;i++)
{
factors=0;
num=i;
for(j=2;j<=num;j++)
if(num%j==0)
	{
	while((num/=j)%j==0);
	factors++;
	if(factors>2)
		{
		res[cnt++]=i;
		break;
		}
	}
}
for(i=0;i<t;i++)
printf("%d\n",res[n[i]-1]);
return 0;
}
