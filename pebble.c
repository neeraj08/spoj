#include<stdio.h>
int main()
{
int r,f,i;char s[200001],c=1;
while(scanf("%s",s)==1)
{
i=-1;f='1';r=0;
while(s[++i]!='\0')
{
if(s[i]==f){r++;f=f=='1'?'0':'1';}
}
printf("Game #%d: %d\n",c++,r);
}
return 0;
}
