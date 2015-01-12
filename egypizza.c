#include<stdio.h>
int main()
{
int n,a,b,p1=0,p2=0,p3=0,p=1;
scanf("%d",&n);
while(n--)
{
scanf("%d/%d",&a,&b);
if(a==1){if(b==2)p2++;else p1++;}
else p3++;
}
if(p1==p3)printf("%d\n",1+p1+(p2+1)/2);
else if(p1>p3){p+=p3;p1-=p3;p2+=(p1+1)/2;p+=(p2+1)/2;printf("%d\n",p);}
else{p+=p1;p3-=p1;p+=p3+(p2+1)/2;printf("%d\n",p);}
return 0;
}
