#include <stdio.h>
int main()
{
int N,i,j,res=0;
scanf("%d",&N);
for(i=1;i<=N;i++)
for(j=i;i*j<=N;j++)
res++;
printf("%d\n",res);
return 0;
}
