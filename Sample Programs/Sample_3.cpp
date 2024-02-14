#include<iostream>
using namespace std;
/*string f(int daynum)
{
	string dayname;
	switch(daynum)
	{
		case 0:
			dayname="Sunday";
			break;
		case 1:
			dayname="Monday";
			break;
	}
	return dayname;
}
int main()
{
	cout<<f(0);
}*/
int main()
{
	int age;
	string name;
	int *p=&age;
	//p is storing the ad of age
	string *q=&name;
	cout<<&age<<endl<<p;
	
}
