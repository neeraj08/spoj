#include<stdio.h>
int main()
{
char s[5],i,r,c=1;
while(scanf("%s",s)==1)
{
i=-1;r=0;
while(s[++i]!='\0')
if(s[i]=='I')
r++;
else if(s[i]=='V') if(i==0)
r+=5;else r=5-r;
else if(i==0)r+=10;else r=10-r;
printf("Case %d: %d\n",c++,r);
}
return 0;
}
