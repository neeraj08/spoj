#include<stdio.h>
int main()
{
int t,i,pos,cnt[26];char c,s[50001],cs[]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'},vs[]={'a','e','i','o','u'};
scanf("%d\n",&t);
while(t--)
{
for(i=0;i<26;cnt[i++]=0);
while((c=getchar())!='\n'&&c!=EOF)
{
cnt[c-97]++;
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
for(pos=0;vs[pos]!=c;pos++);
putchar(cs[((cnt[c-97]-1)*5+pos)%21]);
}
else
{
for(pos=0;cs[pos]!=c;pos++);
putchar(vs[((cnt[c-97]-1)*21+pos)%5]);
}
}
putchar('\n');
}
return 0;
}
