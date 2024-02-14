#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int age;
		string rating;
	student(string aname,int aage,string arating)
	{
		name=aname;
		age=aage;
		rating=arating;
		f(arating);
	}
	void f(string arating)
	{
		if(rating=="DOG")
			rating=arating;
		else
			rating="not rated";
	}

};

int main()
{
	student s1("Sushruth",19,"fuck you");
	cout<<s1.rating;
}
