#include<stdio.h>
int main()
{
unsigned int b,b2,l,n,m;char s[8],s2[14];int i,p;
while(scanf("%s %u %u",s,&b,&b2)==3)
{
n=0;i=-1;
while(s[++i]!='\0')
{
if(s[i]<='9')n=n*b+s[i]-48;
else n=n*b+s[i]-55;
}
s2[7]='\0';
p=6;
while(n)
{
if(p<0)break;
m=n%b2;
if(m>9)s2[p--]=55+m;
else s2[p--]=48+m;
n/=b2;
}
if(n)printf("  ERROR\n");
else{for(i=0;i<=p;i++)putchar(' ');printf("%s\n",s2+p+1);}
}
return 0;
}
