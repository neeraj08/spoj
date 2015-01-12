#include <stdio.h>
int main()
{
unsigned int a,b,c;
scanf("%u %u %u",&a,&b,&c);
while(!(a==0 && b==0 && c==0))
{
if((a*a +b*b == c*c) ||(a*a + c*c == b*b) || (b*b + c*c ==a*a))
printf("right\n");
else
printf("wrong\n");
scanf("%u %u %u",&a,&b,&c);
}
return 0;
}


