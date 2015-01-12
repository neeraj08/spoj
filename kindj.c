#include <stdio.h>
int main()
{
int wrd_pos,cnt;
char c='a';
while(c!=EOF)
{
cnt=0;wrd_pos=0;//0->out 1->in
while((c=getchar())!='\n' && c!=EOF)
{
if(!wrd_pos && ((c>=65 && c<=90) || (c>=97 && c<=122)))
{
wrd_pos=1;
cnt++;
}
if(c==' ')
wrd_pos=0;
}
printf("%d\n",cnt);
}
return 0;
}
