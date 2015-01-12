#include<stdio.h>
int main(){unsigned long long int t,a,b,i,j;int arr[10][4]={0,0,0,0,1,1,1,1,2,4,8,6,3,9,7,1,4,6,4,6,5,5,5,5,6,6,6,6,7,9,3,1,8,4,2,6,9,1,9,1};scanf("%llu",&t);while(t--){scanf("%llu %llu",&a,&b);a%=10;if(b)printf("%d\n",arr[a][(b-1)%4]);else printf("1\n");}return 0;}
