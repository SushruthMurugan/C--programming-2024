#include<iostream>
using namespace std;
int f(int x, int y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	cout<<f(50,30)<<endl;
}