#include<iostream>
#include<string>
using namespace std;

void test02()
{
		//�ַ����ıȽ��ǰ���ASCII����бȽϵ�
	string str1 = "hellp";
	string str2 = "hello2";

	//==0�����
	if (str1.compare(str2) == 0)
	{
		cout << "���" << endl;
	}
	else if(str1.compare(str2) > 0)
	{
		cout << "str1 ��" << endl;
	}
	else
	{
		cout << "str2 ��" << endl;

	}

}


int main()
{
	test02();

}