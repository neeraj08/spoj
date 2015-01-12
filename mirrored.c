#include<stdio.h>
int main()
{
char s[3];
printf("Ready\n");
while(gets(s),!(s[0]==32 && s[1]==32))
{
if((s[0]=='d' &&s[1]=='b')||(s[0]=='b' &&s[1]=='d')||(s[0]=='q' &&s[1]=='p')||(s[0]=='p' &&s[1]=='q'))
printf("Mirrored pair\n");
else 
printf("Ordinary pair\n");


}
return 0;
}
