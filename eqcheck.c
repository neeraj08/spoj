#include<stdio.h>
int main(){int t,a,b,c,p;scanf("%d",&t);while(t--){scanf("%dx+%dy=%d",&a,&b,&c);while(b){a=a%b;p=a;a=b;b=p;}if(c%a)printf("no\n");else printf("yes\n");}return 0;}
