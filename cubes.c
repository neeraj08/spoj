#include <stdio.h>
int main()
{
int a,b,c,d,cube_a,cube_b,cube_c;
for(a=6;a<=100;a++)
{
if(a==9)
continue;
cube_a=a*a*a;
	for(b=1;b*b*b<cube_a;b++)
	{
		cube_b=b*b*b;
		for(c=b;cube_b+c*c*c<cube_a;c++)
			{
			cube_c=c*c*c;
			for(d=c;cube_b+cube_c+d*d*d<=cube_a;d++)
				if(cube_b+cube_c+d*d*d==cube_a)
				{
				printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
				goto aa;
				}
			}
aa:;	
	}
}
return 0;
}


