#include<stdio.h>
int main()
{
int i,p,c=1;
char s[4],s2[6];
while(scanf("%s %s",s,s2)==2)
{
printf("Case %d: ",c++);
if(s[1]=='#')
{
if(s[0]=='A')printf("Bb");
else
if(s[0]=='C')printf("Db");
else
if(s[0]=='D')printf("Eb");
else 
if(s[0]=='G')printf("Ab");
else printf("Gb");
printf(" %s\n",s2);
}
else 
if(s[1]=='b')
{
if(s[0]=='D')printf("C#");
else
if(s[0]=='A')printf("G#");
else 
if(s[0]=='G')printf("F#");
else
if(s[0]=='B')printf("A#");
else printf("D#");
printf(" %s\n",s2);
}
else printf("UNIQUE\n");
}
return 0;
}
