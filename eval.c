//digits of e
#include <stdio.h>
int main()
{
double e=1.0,fact=1;
int i;
for(i=1;i<23;i++)
{
fact*=i;
e+=1/fact;
}
printf("%.55lf\n",e);
return 0;
}
