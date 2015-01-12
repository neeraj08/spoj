#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class emp
{
private:int ssn;
		char name[40];
		int salary;
public:	emp()
		{
			ssn=0;
			salary=0;
			name[0]='\0';
		}
		void setdata()
		{
			cout<<"Enter name ,ssn and salary \n";
			getline(name,40,'\n');
			cin>>ssn;
			cin>>salary;
		}
		void getdata()
		{
			cout<<"Name  \t:"<<name<endl;
			cout<<"SSn   \t:"<<ssn<<end;
			cout<<"Salary\t:"<<salary<<endl;
		}
		int getssn()
		{
			return ssn;
		}
		int getsalary()
		{
			return salary;
		}
	

};

int main()
{

return 0;
}
