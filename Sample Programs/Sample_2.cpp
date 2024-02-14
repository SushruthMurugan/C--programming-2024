#include<iostream>
using namespace std;
/*void f(string name, int age)
{
	cout<<"Hey "<<name<<" your age is "<<age<<endl;
}
int main()
{
	f("Sush",45);
	f("Sushruth",46);
	f("Sushruth Murugan",47);
}
double square(double num)
{
	return num*num;
}
int main()
{
	cout<<square(3.1);
}
int main()
{
	bool isTall = "true";
	bool isMale = "true";
	if(isMale)
	{
		cout<<"You are a male";
	}
}*/
int max(int num1,int num2,int num3)
{
	int result;
	if(num1>=num2 && num1>=num3)
	{
		result=num1;
	}
	if(num2>=num1 && num2>=num3)
	{
		result=num2;
	}
	else
	{
		result=num3;
	}
}
int main()
{
	int x,y,z;
	cout<<"Enter the values of x y and z"<<endl;
	cin>>x;
	cin>>y;
	cin>>z;	
	cout<<max(x,y,z);
}