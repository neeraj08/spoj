// 1 1 2012	Sunday

#include<stdio.h>
int main()
{
int t,i,d,m,y,n,months[12]={3,0,3,2,3,2,3,3,2,3,2,3};
scanf("%d",&t);
while(t--)
{
scanf("%d %d %d",&d,&m,&y);
n=(y-2012)+(y-2012+3)/4;
n-=(y-2001)/100;
n+=(y-2001)/400;
for(i=0;i<m-1;i++)
n+=months[i];
if((y%400==0 || (y%100 && y%4==0)) && m>2)n++;
n+=d-1;
n%=7;
switch(n)
{
case 0:printf("Sunday\n");break;
case 1:printf("Monday\n");break;
case 2:printf("Tuesday\n");break;
case 3:printf("Wednesday\n");break;
case 4:printf("Thursday\n");break;
case 5:printf("Friday\n");break;
case 6:printf("Saturday\n");
}
}
return 0;
}
