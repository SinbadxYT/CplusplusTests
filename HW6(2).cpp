#include<iostream>
using namespace std;
int main()
{
	int a,b=0;
	cin>>a;
	int a1=a;
	for(;a!=0;){
	    b=b*10+a%10;
		a/=10;
	}
	if(b==a1){
		cout<<"yes";
	}
	if(b!=a1){
		cout<<"no";
	}
} 
