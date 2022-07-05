#include <iostream>  // 将输入输出流程序库，包含进我们的程序
using namespace std; // 为程序制定一个默认的命名空间
int main()
{
	/* 初始化 */
	int naturalNumber,repeatNumber; // natrualNumber用来存储一个自然数，repeatNumber用来记录重复次数
	repeatNumber=0;  // 没有执行程序前，repeatNumber为0。每重复执行一次，repeatNumber增加1

	/* 获取一个自然数，然后打印出来给我看 */
	cin >> naturalNumber;  // 从命令窗口获取我们输入的自然数，我们想输入什么就输入什么，但必须是自然数
	cout << "原始自然数：" << naturalNumber  << endl; // 

	/* 一遍一遍重复计算，直到自12然数成为1                            */
	/* 如果自然数是奇数，那么让自然数乘以3再加1（naturalNumber*3+1） */
	/* 如果自然数是偶数，那么让自然数除以2（naturalNumber/2）       */
	while(naturalNumber != 1)                       // 只要naturalNumber还不是1，就继续重复执行
	{
		if (naturalNumber/2*2 != naturalNumber)     // C++中整数除法的结果也是整数，所以如果naturalNumber是奇数的话
		{                                           // 它除以2后会被舍掉小数，再乘以2后会比原数少1
			naturalNumber=naturalNumber*3+1;        // 因为naturalNumber是奇数，所以这样处理
			repeatNumber=repeatNumber+1;            // repeatNumber加1
		}
		else
		{
			naturalNumber=naturalNumber/2;          // 因为naturalNumber是偶数，所以这样处理
			repeatNumber=repeatNumber+1;            // repeatNumber加1
		}
		cout << "第"<<repeatNumber<<"轮计算:" << naturalNumber  << endl;  //每次重复执行后，输出计算结果
	}
	return 0;   // C++标配，好习惯，测试可用123123 
}

