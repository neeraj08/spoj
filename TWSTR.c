#include<stdio.h>
#include<string.h>
int fn(char *q,char *s);
int main()
{
int t,n,i,j,m,pos;
scanf("%d",&t);
if(t==0)
return 0;
char s[t][1001],q[1001];
int p[t];
for(i=0;i<t;i++)
scanf("%s %d",s[i],&p[i]);
scanf("%d",&n);
while(n--)
{
m=-1011111111;pos=-1;
scanf("%s",q);
for(i=0;i<t;i++)
{
if(p[i]>m && fn(q,s[i]))
{
m=p[i];
pos=i;
}
}
if(pos!=-1)
printf("%s\n",s[pos]);
else
printf("NO\n");
}
return 0;
}

int fn(char *q,char *s)
{
while(*q!='\0')
{
if(*q!=*s || *s=='\0')
return 0;
q++;s++;
}
return 1;
}
