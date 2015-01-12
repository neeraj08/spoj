#include<stdio.h>
int main()
{
char c,s[10],X,O,Xwin,Owin;
int i,j,t;
scanf("%d",&t);
while(t--)
{
scanf("%s %s %s",s,s+3,s+6);
//printf("read %s\n",s);
X=O=Xwin=Owin=0;
for(i=0;i<9;i++)
if(s[i]=='X')X++;else if(s[i]=='O')O++;
if(O>X || X>O+1){printf("no\n");continue;}
for(i=0;i<3;i++)
{
if((s[i*3]==s[i*3+1])&&(s[i*3]==s[i*3+2]))
if(s[i*3]=='X')Xwin=1;else if(s[i*3]=='O')Owin=1;
if(s[i]==s[i+3] && s[i]==s[i+6])
if(s[i]=='X')Xwin=1;else if(s[i]=='O')Owin=1;
if(s[0]==s[4] && s[0]==s[8])if(s[0]=='X')Xwin=1;else if(s[0]=='O')Owin=1;
if(s[2]==s[4] && s[2]==s[6])if(s[2]=='X')Xwin=1;else if(s[2]=='O')Owin=1;
}
if((Xwin && Owin) || (Owin &&X==O+1) ||(Xwin && X==O))printf("no\n");
else printf("yes\n");
}
return 0;
}
