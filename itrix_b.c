#include <stdio.h>
char arr[4]={'2','3','5','7'};
void recur(unsigned long int n);
int main()
{
int t;
scanf("%d",&t);
unsigned long int n;
while(t--)	
{
scanf("%lu",&n);
recur(n);
putchar('\n');
}
return 0;
}

void recur(unsigned long int n)
{
n=n-1;
if(n/4)
recur(n/4);
putchar(arr[n%4]);
}
