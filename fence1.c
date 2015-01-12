#include <stdio.h>
int main()
{
float a,r,pi=3.14159265;int L;
scanf("%d",&L);
while(L)
{
r=L/pi;
a=r*r*pi/2;
printf("%.2f\n",a);
scanf("%d",&L);
}


return 0;
}
