#include <iostream>  // ���������������⣬���������ǵĳ���
using namespace std; // Ϊ�����ƶ�һ��Ĭ�ϵ������ռ�
int main()
{
	/* ��ʼ�� */
	int naturalNumber,repeatNumber; // natrualNumber�����洢һ����Ȼ����repeatNumber������¼�ظ�����
	repeatNumber=0;  // û��ִ�г���ǰ��repeatNumberΪ0��ÿ�ظ�ִ��һ�Σ�repeatNumber����1

	/* ��ȡһ����Ȼ����Ȼ���ӡ�������ҿ� */
	cin >> naturalNumber;  // ������ڻ�ȡ�����������Ȼ��������������ʲô������ʲô������������Ȼ��
	cout << "ԭʼ��Ȼ����" << naturalNumber  << endl; // 

	/* һ��һ���ظ����㣬ֱ����12Ȼ����Ϊ1                            */
	/* �����Ȼ������������ô����Ȼ������3�ټ�1��naturalNumber*3+1�� */
	/* �����Ȼ����ż������ô����Ȼ������2��naturalNumber/2��       */
	while(naturalNumber != 1)                       // ֻҪnaturalNumber������1���ͼ����ظ�ִ��
	{
		if (naturalNumber/2*2 != naturalNumber)     // C++�����������Ľ��Ҳ���������������naturalNumber�������Ļ�
		{                                           // ������2��ᱻ���С�����ٳ���2����ԭ����1
			naturalNumber=naturalNumber*3+1;        // ��ΪnaturalNumber��������������������
			repeatNumber=repeatNumber+1;            // repeatNumber��1
		}
		else
		{
			naturalNumber=naturalNumber/2;          // ��ΪnaturalNumber��ż����������������
			repeatNumber=repeatNumber+1;            // repeatNumber��1
		}
		cout << "��"<<repeatNumber<<"�ּ���:" << naturalNumber  << endl;  //ÿ���ظ�ִ�к����������
	}
	return 0;   // C++���䣬��ϰ�ߣ����Կ���123123 
}

