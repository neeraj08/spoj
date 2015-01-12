#include <stdio.h>
int main()
{
int t,x,y,i,j,size,min,val;
unsigned long long int cnt;
scanf("%d",&t);
while(t--)
{
cnt=0;
scanf("%d %d",&x,&y);
min=x<y?x:y;
size=1;
while(size<=min)
{
cnt+=4*(x+1-size)*(y+1-size);
if((val=(y+1-size)*(x+1-2*size))>0)
cnt+=2*(val);
if((val=(x+1-size)*(y+1-2*size))>0)
cnt+=2*(val);
size++;
}
printf("%llu\n",cnt);
}
return 0;
}
