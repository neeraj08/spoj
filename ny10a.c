#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,h,p,i;
char c0,c1,c2,s[41];
scanf("%d\n",&p);
while(p--)
{
scanf("%d\n",&a);
printf("%d ",a);
a=b=c=d=e=f=g=h=0;
gets(s);
c2=s[0];c1=s[1];
for(i=2;i<40;i++)
{
c0=s[i];
if(c2=='T')
{

if(c1=='T')
{
if(c0=='T')a++;else b++;
}
else
{
if(c0=='T')c++;else d++;
}

}
else
{

if(c1=='T')
{
if(c0=='T')e++;else f++;
}
else
{
if(c0=='T')g++;else h++;
}

//TTT, TTH, THT, THH, HTT, HTH, HHT and HHH

}
c2=c1;c1=c0;
}
printf("%d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h);
}
return 0;
}
