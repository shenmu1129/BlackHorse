#include<iostream>
#include<string>
using namespace std;

void test02()
{
	string str1 = "hello";
	//ͨ��[]���ʵ����ַ�

	for (int i = 0; i < str1.size(); i++)
	{
		cout <<str1[i] << endl;
	}

	//ͨ��at����
	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1.at(i) << endl;
	}

	str1[1] = 'x';
	str1.at(1) = 'x';
}


int main()
{
	test02();

}