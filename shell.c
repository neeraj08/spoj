#include <stdio.h>
int main()
{
int n;char c=1,s,s2,pos,tmp[7];
while(scanf("%c%s\n%d\n",&pos,tmp,&n)==3)
{
//printf("scanned %s %d\n",pos,n);
while(n>0)
{
scanf(" %c%s %c%s\n",&s,tmp,&s2,tmp);
//printf("scanned %s %s\n",s,s2);
if(s==pos)
pos=s2;
else
if(s2==pos)
pos=s;
n--;
}
if(pos=='c')
printf("centre\n");
else if(pos=='r')
printf("right\n");
else if(pos=='l') printf("left\n");
}
return 0;
}
