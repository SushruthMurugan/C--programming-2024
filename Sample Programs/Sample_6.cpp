#include<iostream>
using namespace std;
/*class student{
	public:
		string name;
		int age;
	student(string aname,int aage)
	{
		name=aname;
		age=aage;
	}
};

int main()
{
	student g("Sushruth",78);
	cout<<g.name<<endl;
	g.name="Rahul\n";
	cout<<g.name<<g.age<<endl;
}*/
class chef{
	public:
		void mc()
		{
			cout<<"chicken";
		}
		void mb()
		{
			cout<<"biriyani";
		}
};
class itchef:public chef{
	public:
			void mc()
	{
		cout<<"chicken balls";
	}	
	
};
int main()
{
	chef chef;
	chef.mc();
	itchef itchef;
	itchef.mc();
	itchef.mb();
	
}