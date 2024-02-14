#include<iostream>
using namespace std;
/*class book
{
	public:
		string title;
		int pages;
		string author;
		
	book(string atitle,string aauthor,int apages)
	{
		title=atitle;
		pages=apages;
		author=aauthor;
		}	
};

int main()
{
	book book2("Sush","Ruth",500);
	cout<<book2.title;	
	
}*/
/*class mystudent{
	public:
		string name;
		int age;
	void function()
	{
		cout<<"Fuck my life";
		
	}
};
int main()
{
	mystudent myname;
	myname.function();
}*/
class mystudent{
	public:
		string name;
		int age;
	void function();
		
};
void mystudent::function()
{
	cout<<"Fuck my life";
}
int main()
{
	mystudent object;
	object.function();
}