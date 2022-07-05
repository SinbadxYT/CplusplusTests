#include<iostream>
using namespace std;
int main()
{
	int w,u,m=0;
	cin>>w>>u;
	if(w<1000){
		m=8;
	}
	else{
		if(w%500==0){
			m=8+(w-1000)/500*5;
		}
		else{
			m=8+(w-500)/500*5;
		}
	}
	if(u);
	{
		m+=5;
	}
	cout<<m;
}
