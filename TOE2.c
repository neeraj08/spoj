#include<stdio.h>
int main()
{
char c,s[10],X,O,Xwin,Owin;
int i,j;
while(1)
{
gets(s);
//printf("read %s\n",s);
if(s[0]=='e')
return 0;
X=O=Xwin=Owin=0;
for(i=0;i<9;i++)
if(s[i]=='X')X++;else if(s[i]=='O')O++;
if(O>X || X>O+1){printf("invalid\n");continue;}
for(i=0;i<3;i++)
{
if((s[i*3]==s[i*3+1])&&(s[i*3]==s[i*3+2]))
if(s[i*3]=='X')Xwin=1;else if(s[i*3]=='O')Owin=1;
if(s[i]==s[i+3] && s[i]==s[i+6])
if(s[i]=='X')Xwin=1;else if(s[i]=='O')Owin=1;
if(s[0]==s[4] && s[0]==s[8])if(s[0]=='X')Xwin=1;else if(s[0]=='O')Owin=1;
if(s[2]==s[4] && s[2]==s[6])if(s[2]=='X')Xwin=1;else if(s[2]=='O')Owin=1;
}
if((Xwin && Owin) || ((X+O)!=9 && Xwin==0 && Owin==0) ||(Owin &&X==O+1) ||(Xwin && X==O))printf("invalid\n");
else printf("valid\n");
}
return 0;
}
