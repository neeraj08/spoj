#include <stdio.h>
int main()
{
double pi=0,t=1;
long long int i;
for(i=1;i<922222222;i+=2)
{
pi+=t/i;
t*=-1;
}
printf("%.44lf",pi*4);return 0;}
