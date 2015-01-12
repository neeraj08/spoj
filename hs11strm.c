#include<stdio.h>
int main()
{
int t,i,j,k;char c,s[33],s2[33];
scanf("%d",&t);
while(t--)
{
scanf("%s %s",s,s2);
i=-1;
while((c=s2[++i])!='\0')
{
j=k=-1;
while(s[++j]!='\0')
if(s[j]!=c) s[++k]=s[j];
else c=45;
s[++k]='\0';
}
printf("%s\n",s);
}
return 0;
}
