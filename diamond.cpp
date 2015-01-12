#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
int len,lines,i,j,n;
char str[80],str2[40];
cin.getline(str,80,'\n');
len=strlen(str);	
cout<<"len is "<<len<<endl;
lines=len%2?len:len-1;
cout.width(len-n+1);
for(i=0;i<=lines/2;i++)
{
	n=len/2-i;
	cout.setf(ios::left,ios::adjustfield);
	cout.write(str,n-i);
	cout.setf(ios::right,ios::adjustfield);
	cout.write(str+len-n,n-i);
	cout<<endl;
}

return 0;
}
