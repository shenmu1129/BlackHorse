#include<iostream>
#include<string>
using namespace std;



void test01()
{
	string str = "abcdefg";
	//find�����������Ӵ����ޣ�����У������±꣨��0��ʼ����û�з���-1

	int pos = str.find("adbc");
	if (pos != -1)
	{
		cout << "��" << endl;
	}
	else
	{
		cout << "��" << endl;
	}
	
	//rfind����
	//rfind��find���ң�rfind��������飬find�������Ҳ�
	//�±�Ļ����Ǵ�0��ʼ����
	pos = str.rfind("abc");
	if (pos != -1)
	{
		cout << "��"  << pos << endl;
	}
	else
	{
		cout << "��" << endl;
	}
}

void test02()
{
	string str = "abcdasdasd";
	//��1��λ���𣬵�3��λ�ý������ַ��滻Ϊ12312312 
	str.replace(1, 3, "12312312");
}


int main()
{
	test02();
	//test01();
}