//spoj VOWELS
#include <stdio.h>
int main()
{
int cnt=0;char c;
while((c=getchar())!='\n' &&c!=' ')
if(c=='a' || c=='A' ||c=='e' ||c=='E' ||c=='i' ||c=='I' ||c=='o' ||c=='O' || c=='u'||c=='U')
cnt++;
printf("%d\n",cnt);
return 0;
}
