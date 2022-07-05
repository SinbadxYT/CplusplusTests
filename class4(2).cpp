#include <iostream>
using namespace std;
int main()
{
	long long i,n,x,end = 1;
	cin >> x >> n;
	for(i = 0;i < n;i++)
	{
		end=end*x+end;
	}
	cout << end; 
	return 0;
}
