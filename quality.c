#include <stdio.h>
int main()
{
int a1,b1,c1,a2,b2,c2,r1,r2,n=1;
scanf("%d",&a1);
while(scanf(" %d %d %d %d %d",&b1,&c1,&a2,&b2,&c2)==5)
{
r1=r2=0;
if(a1)
{
	r1++;
	r2+=a1+(a2-1)*1200;
}
if(b1)
{
	r1++;
	r2+=b1+(b2-1)*1200;
}
if(c1)
{
	r1++;
	r2+=c1+(c2-1)*1200;
}
printf("team %d: %d, %d\n",n++,r1,r2);
scanf("%d",&a1);
}
return 0;
}
