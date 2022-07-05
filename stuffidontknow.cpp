#include <iostream>

using namespace std;
int main ()
{
	int a,b;
	a=b=5;
	cout<<a<<ends<<b<<endl;
	(a=b)=10;
	cout<<a<<ends<<b<<endl;
	(a+=b)=20;
	cout<<a<<ends<<b<<endl;
}
