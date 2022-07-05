#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cin>>x;
	
	if(0<=x && x<5);
	{
		y=(x+3);
		cout<<y<<endl;
	}
	if(5<=x && x<10);
	{
		y=(4+(x-3)*(x-3));
		cout<<y<<endl;
	}
	if(10<=x);
	{
		y=(10*x+3);
		cout<<y<<endl;
	}
	return 0;
}
