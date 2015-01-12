/*10738. Ra-One Numbers
Problem code: RAONE

In the War between good and evil . Ra-One is on the evil side and G-One on the good side.

Ra-One is fond of destroying cities and its G-one's duty to protect them..

 

Ra-One loves to destroy cities whose Zip Code has special properties. He says he loves to destroy cities which have Ra-One numbers as their ZIp Code.

Any number is Ra-one if the Difference between Sum of digits at even location and Sum of digits at odd location is One (1).. For eg... for 234563 is Ra-One number

digits at odd location are 3,5,3 (unit place is location 1 )

digits at even location are 2,4,6

Diff = (2+4+6)-(3+5+3)=12-11 = 1.

And 123456 is not Ra-One number

diff = (5+3+1) - (2+4+6) = -4

 

G-One knows this about Ra-one and wants to deploy his Army members in those cities. 1 army member will be deployed in each city.

G-one knows the range of ZIP-Codes where Ra-One might attack & needs your help to find out how many army members he needs.

Can you help Him ?
Input

first line will have only one integer 't' number of Zip-Code ranges. it is followed by t lines

each line from 2nd line cotains 2 integer 'from'  and 'to'. these indicate the range of Zip codes where Ra-one might attack .(from and to are included in the range)
Output

A single number for each test case telling how many army members G-One needs to deploy.

each number should be on separate lines
Example

Input:
2
1 10
10 100


 Output:

1
9
explanation:

for 1st test case the only number is 10

for 2nd test case numbers are 10,21,32,43,54,65,76,87,98

NOTE: t will be less than 100
from and to will be between 0 and 10^8 inclusive */
#include <stdio.h>
int main()
{
int t;
register int i,j;
scanf("%d",&t);
unsigned long long int arr[t][2],odd,even,n,max=0,cnt=0;
for(i=0;i<t;i++)
{
scanf("%llu %llu",&arr[i][0],&arr[i][1]);
if(max<arr[i][1])
	max=arr[i][1];
}
unsigned long long int res[max+1];
for(j=1;j<=max;j++)
	{
	res[j]=0;
	odd=even=0;
	n=j;
	while(n)
	{
		odd+=n%10;
		n/=10;
		even+=n%10;
		n/=10;
	}
	if(even-odd==1)
		cnt++;	
	res[j-1]=cnt;
	}
for(i=0;i<t;i++)
if(arr[i][0]<10)
if(arr[i][1])
printf("%llu\n",res[arr[i][1]-1]);
else printf("0\n");
else
printf("%llu\n",res[arr[i][1]-1]-res[arr[i][0]-2]);
return 0;
}
