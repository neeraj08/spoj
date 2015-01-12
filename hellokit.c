#include<stdio.h>
int main()
{
char s[33];int l,i,j,n;
while(scanf("%s %d",s,&n),s[0]!='.')
{
l=-1;
while(s[++l]!='\0');
for(i=0;i<l;i++)
{
printf("%s",s+i);
for(j=1;j<n;j++)
printf("%s",s);
for(j=0;j<i;j++)
putchar(s[j]);
putchar('\n');
}
}
return 0;
}
