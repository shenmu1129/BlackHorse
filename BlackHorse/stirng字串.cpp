#include<iostream>
#include<string>
using namespace std;


//string ���ִ�
void test02()
{
	string str1 = "hello";
	//��ĳ��λ�ÿ�ʼ���ض��ٸ�
	string subStr = str1.substr(1, 3);
	cout << subStr << endl;


}

void test03()
{
	string str1 = "hello11@sina.com";
	//���ʼ���ַ�л�ȡ�û���
	int pos = str1.find('@');

	string subStr = str1.substr(0, pos);

	cout << subStr << endl;


}

int main()
{
	test03();

}