#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>

//vectorԤ���ռ� - ����vector�ڶ�̬��չ����ʱ����չ����
//reserve(int len);		//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���

void Test1()
{
	vector<int> v;
	v.reserve(100000);
	int count = 0;  //ͳ�ƿ����˶��ٴ��ڴ�
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			count++;
		}
	}

	cout << count << endl;
}

int main()
{
	Test1();

	system("pause");
	return 0;
}