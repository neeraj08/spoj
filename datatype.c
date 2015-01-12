#include <stdio.h>
int main()
{
printf("size of short \t is\t%d\n",sizeof(short));
printf("size of int is %d\n",sizeof(int));
printf("size of long int \tis\t%d\n",sizeof(long int));
printf("size of long long int is\t%d\n",sizeof(long long int));
struct node{char a;int data;char c;struct node *next;}a;
printf("size of this struct is %d\n",sizeof(a));
//printf("size of  is %d\n",sizeof());
//printf("size of  is %d\n",sizeof());
return 0;
}
