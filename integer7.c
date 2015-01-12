/*Find two nonnegative integers x1 and x2 so that a1 * x1 + b1 = a2 * x2 + b2 and x1 + x2 is minimized. Given that there exist x1 and x2 satisfying the above equation.
Input

    A single line containing four integers a1, b1, a2, b2 (the integers are within the interval [0..231-1].

Output

    Print two integers x1, x2.

Example

Input
3 4 5 5

Output
2 1

*/#include <stdio.h>
int main()
{
unsigned long int a1,b1,a2,b2,i,j;
scanf("%lu %lu %lu %lu",&a1,&b1,&a2,&b2);
for(i=0,j=1;;i++,j++)
{
if(a1*i+b1 == a2*j+b2)
{printf("%lu %lu\n",i,j);break;}
else if(a1*j+b1 == a2*i+b2)
{printf("%lu %lu\n",j,i);break;}
}
return 0;
}
