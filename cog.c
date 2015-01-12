// in short :To find centre of gravity on n coordinate points.

/*
SPOJ Problem Set (classical)
40. Lifting the Stone
Problem code: STONE

There are many secret openings in the floor which are covered by a big heavy stone. When the stone is lifted up, a special mechanism detects this and activates poisoned arrows that are shot near the opening. The only possibility is to lift the stone very slowly and carefully. The ACM team must connect a rope to the stone and then lift it using a pulley. Moreover, the stone must be lifted all at once; no side can rise before another. So it is very important to find the centre of gravity and connect the rope exactly to that point. The stone has a polygonal shape and its height is the same throughout the whole polygonal area. Your task is to find the centre of gravity for the given polygon.
Input

The input consists of T test cases (equal to about 500). The number of them (T) is given on the first line of the input file. Each test case begins with a line containing a single integer N (3 <= N <= 1000000) indicating the number of points that form the polygon. This is followed by N lines, each containing two integers Xi and Yi (|Xi|, |Yi| <= 20000). These numbers are the coordinates of the i-th point. When we connect the points in the given order, we get a polygon. You may assume that the edges never touch each other (except the neighbouring ones) and that they never cross. The area of the polygon is never zero, i.e. it cannot collapse into a single line.
Output

Print exactly one line for each test case. The line should contain exactly two numbers separated by one space. These numbers are the coordinates of the centre of gravity. Round the coordinates to the nearest number with exactly two digits after the decimal point (0.005 rounds up to 0.01). Note that the centre of gravity may be outside the polygon, if its shape is not convex. If there is such a case in the input data, print the centre anyway.
Example

Sample Input:
2
4
5 0
0 5
-5 0
0 -5
4
1 1
11 1
11 11
1 11

Sample output:

0.00 0.00
6.00 6.00
*/
#include <stdio.h>
int main()
{
int t,i,j,n,loop=0;
scanf("%d",&t);
float res[t][2];
while(loop<t)
{
scanf("%d",&n);
float x,y;
res[loop][0]=0;
res[loop][1]=0;
for(i=0;i<n;i++)
{
scanf("%f %f",&x,&y);
res[loop][0]+=x;
res[loop][1]+=y;
}
res[loop][0]/=n;
res[loop][1]/=n;
loop++;
}
for(loop=0;loop<t;loop++)
printf("%.2f %.2f\n",res[loop][0],res[loop][1]);
return 0;
}
