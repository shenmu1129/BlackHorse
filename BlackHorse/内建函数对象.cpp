#include <iostream>
#include <functional> //�ڽ���������ͷ�ļ�
using namespace std;


//�ڽ��������������º���

//negate һԪ�º�����ȡ���º���
void test01()
{
	negate<int > n;
	cout << n(50) << endl;
}

//plus ��Ԫ�º��� �ӷ�
void test02()
{
	plus<int> p;
	cout << p(10, 10) << endl;
}

int main()
{
	test02();
	//test01();
	system("pause");
	return 1; 
}