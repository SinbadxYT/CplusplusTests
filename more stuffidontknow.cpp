#include <iostream>

using namespace std;
int main ()
{
	int a,b=5;
	b++;
	++b;
	a=b++;
	a=++b;
	cout<<a<<ends<<b<<endl;
}
