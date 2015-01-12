#include <stdio.h>
int main()
{
int t,i,maxg,maxm,a,ng,nm;
scanf("%d",&t);
while(t--)
{
maxg=maxm=0;
scanf("%d %d",&ng,&nm);
for(i=0;i<ng;i++)
{
scanf("%d",&a);
if(maxg<a)
maxg=a;
}
for(i=0;i<nm;i++)
{
scanf("%d",&a);
if(maxm<a)
maxm=a;
}
if(maxg>=maxm)
printf("Godzilla\n");
else
printf("MechaGodzilla\n");
}
return 0;
}
