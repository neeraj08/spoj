#include<stdio.h>
int main(){int t,p=0,s=0,a,b;scanf("%d",&t);while(t--){
scanf("%d %d",&a,&b);p+=a;s+=b;}switch(s*10/p){case 9:printf("A");break;case 8:printf("B");break;case 7:printf("C");break;case 6:printf("D");break;default:printf("F");}return 0;}
