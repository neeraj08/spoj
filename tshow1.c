//amusing numbers
#include <stdio.h>
char arr[2]={'5','6'};
void recur(long int N);
int main()
{
long int t,N;
scanf("%ld",&t);
while(t--)
{
scanf("%ld",&N);
recur(N);
putchar('\n');
}
return 0;
}

void recur(long int N)
{
N=N-1;
if(N/2)
recur(N/2);
putchar(arr[N%2]);
}

