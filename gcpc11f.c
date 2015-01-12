#include<stdio.h>
int main()
{
int t,a[26],d,m,m2,i=-1,p;
char s[1002],c;
scanf("%d\n",&t);
while(t--)
{
for(i=0;i<26;i++)a[i]=0;
m=m2=0;
gets(s);
i=-1;
while(s[++i]!='\0')
{
if(s[i]!=32){if(++a[s[i]-65]>=m){p=s[i]-65;m2=m;m=a[p];}}
}
if(m==m2)printf("NOT POSSIBLE\n");
else
{
if(p==4){printf("0 ");puts(s);}
else 

{
if(p<4) d=22+p;
else d=p-4;
printf("%d ",d);
i=-1;
while(s[++i]!='\0'){if(s[i]==32)putchar(' ');else if((c=s[i]-d)>64)putchar(c);else putchar(c+26);}
putchar('\n');
}

}

}
return 0;
}
