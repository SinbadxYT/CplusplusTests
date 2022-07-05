#include <iostream>
using namespace std;
int main()
{
	int n;
	long long a=0;
	cin>>n;
	for(int i=0; i<=n; i+=7)
	{
		a+=i;
	}
	cout<<a<<endl;
}
