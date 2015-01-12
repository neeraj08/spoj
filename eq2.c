#include<stdio.h>
int main()
{
int a,b,c,i,j,k,p1,p2,p3,cas=1,r;char s[35],s1[11],s2[11],s3[11];
while(scanf("%s",s)==1)
{i=-1;
j=-1;
while(s[++i]!='+')
s1[++j]=s[i];
s1[++j]='\0';

j=-1;
while(s[++i]!='=')
s2[++j]=s[i];
s2[++j]='\0';

j=-1;
while(s[++i]!='\0')
s3[++j]=s[i];
s3[++j]='\0';

printf("s1 is %s \ns2 is %s\ns3 is %s\n",s1,s2,s3);
p1=p2=p3=a=b=c=r=0;
i=-1;
while(s1[++i]!='\0')
if(s1[i]!='?'){a=a*10+s1[i]-48;p1*=10;}
else {a*=10;p1=1;}

printf("a is %d\n",a);

i=-1;
while(s2[++i]!='\0')
if(s2[i]!='?'){b=b*10+s2[i]-48;p2*=10;}
else {b*=10;p2=1;}

printf("b is %d\n",b);


i=-1;
while(s3[++i]!='\0')
if(s3[i]!='?'){c=c*10+s3[i]-48;p3*=10;}
else {c*=10;p3=1;}

printf("c is %d\n",c);


for(i=p1*9;i>=0;)
{
for(j=p2*9;j>=0;)
{
for(k=p3*9;k>=0;)
{	if(a+i+b+j==c+k)
	{
	printf("%d+%d=%d\n",a+i,b+j,c+k);
	r++;
	}
if(p3)k-=p3; else k--;
}
if(p2)j-=p2; else j--;
}
if(p1)i-=p1; else i--;
}
printf("Case %d: %d\n",cas++,r);
}
return 0;
}
