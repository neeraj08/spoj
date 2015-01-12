#include<stdio.h>
int main()
{
char s[32];
int i,n,r;
scanf("%d\n",&n);
while(n--)
{
r=1;
gets(s);
for(i=1;s[i];i++)
if(s[i]==s[i-1])
r*=2;
printf("%d\n",r);
}
return 0;
}
