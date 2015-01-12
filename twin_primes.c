#include<stdio.h>
int main()
{
int i=3,j,prev=2,cnt=0;
int p[1000000],pos=-1;
p[++pos]=2;
while(cnt<100000)
{
for(j=0;j<=pos;j++)
if(i%p[j]==0)
break;
if(j>pos)//if prime
{
p[++pos]=i;
if(i==p[pos-1]+2)
{
printf("%d,",i-2);
cnt++;
}
}
i+=2;
}
printf("\n\ncnt=%d\n",cnt);
return 0;
}
