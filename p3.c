#include <stdio.h>
int main()
	{
	   int cases;
	   scanf("%d\n",&cases);
	   int tmp,n,turn,zero,one;
	   char s[4];	    
while(cases--)
{   
	       scanf("%d\n",&n);
	       zero=0;one=0;
	       tmp=n;  
	       while(tmp--)
			   {
	         scanf("%s\n",s);
	         if(s[0]=='l') ++zero;
	         else  ++one;
	               	   }
	       if(n%2==0)
		   {
	              if(one%2==0) printf("hhb\n");
	              else printf("lxh\n");
	           }
	       else
	 	   {
	              if(one%2!=0) printf("hhb\n");
	              else printf("lxh\n");
	           }
}
return 0;
}
