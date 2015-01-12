#include <stdio.h>
int main()
{
unsigned long int a;
scanf("%lu",&a);
if(!a || !(a&(a-1)))
printf("TAK");
else
printf("NIE");
return 0;
}
