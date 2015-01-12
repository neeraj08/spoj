#include<stdio.h>
int main()
{
int cas=1;
 char vowel[] = {'A', 'U', 'E', 'O', 'I'};
        char conso[] ={'J', 'S' , 'B' , 'K' , 'T','C','L','D','M','V','N','W','F','X','G','P','Y','H','Q','Z','R'};
 char ans[212]="AJAJAJAJAJASASASASASABABABABABAKAKAKAKAKATUTUTUTUTUCUCUCUCUCULULULULULUDUDUDUDUDUMUMEMEMEMEVEVEVEVEVENENENENENEWEWEWEWEWEFEFEFOFOFOXOXOXOXOXOGOGOGOGOGOPOPOPOPOPOYOYOYOYOYIHIHIHIHIHIQIQIQIQIQIZIZIZIZIZIRIRIRIRIRI";

int i,j,N,n;
scanf("%d",&N);
while(N--)
{
	printf("Case %d: ",cas++);
	scanf("%d",&n);
	for(i=0;i<n;i++)
		putchar(ans[i]);
	puts("");
}
return 0;
}
