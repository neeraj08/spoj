#include<stdio.h>
int main()
{
int t,a,b,c;
scanf("%d",&t);
while(t--)
{
scanf("%d%d%d",&a,&b,&c);
if(c-b==b-a)
printf("%d\n",c+c-b);
else
printf("%d\n",c*c/b);
}
return 0;
}
