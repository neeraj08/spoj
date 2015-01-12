#include<stdio.h>
int main()
{
int n,a,m,m2=0,s,s2=0,p1=0,p2=0,lm=0,ls=0,lm2=0,ls2=0;
scanf("%d",&n);
while(n--)
{
scanf("%d %d:%d",&a,&m,&s);
if(p1>p2){if(s>s2){ls+=s-s2;lm+=m-m2+ls/60;ls%=60;}else{ls+=s+60-s2;lm+=m-m2-1+ls/60;ls%=60;}}
else
if(p1<p2){if(s>s2){ls2+=s-s2;lm2+=m-m2+ls2/60;ls2%=60;}else{ls2+=s+60-s2;lm2+=m-m2-1+ls2/60;ls2%=60;}}
m2=m;s2=s;
if(a==1)p1++;else p2++;
}
//printf("m2=%d\ts2=%d\tp1=%d\tp2=%d\n\n\n",m2,s2,p1,p2);
m=48;s=0;
if(p1>p2){if(s>s2){ls+=s-s2;lm+=m-m2+ls/60;ls%=60;}else{ls+=s+60-s2;lm+=m-m2-1+ls/60;ls%=60;}}
else
if(p1<p2){if(s>s2){ls2+=s-s2;lm2+=m-m2+ls2/60;ls2%=60;}else{ls2+=s+60-s2;lm2+=m-m2-1+ls2/60;ls2%=60;}}


if(lm<=9)putchar('0');
printf("%d:",lm);
if(ls<=9)putchar('0');
printf("%d\n",ls);
if(lm2<=9)putchar('0');
printf("%d:",lm2);
if(ls2<=9)putchar('0');	
printf("%d\n",ls2);

return 0;
}
