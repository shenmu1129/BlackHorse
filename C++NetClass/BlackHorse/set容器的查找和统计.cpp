#include<iostream>
#include <set>
using namespace std;

void printfSet(set<int>& S)
{
	for (auto it = S.begin(); it != S.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int > s;
	s.insert(30);
	s.insert(10);
	s.insert(20);
	s.insert(40);
	s.insert(50);
	s.insert(0);

	set<int >::iterator it = s.find(10);

	//set������find����������ҵ��˾ͷ���iter��û�ҵ��ͷ���s.end()
	if (it != s.end())
	{
		cout << "�ҵ���" << endl;
	}
	else
	{
		cout << "û�ҵ�" << endl;

	}

}

void test02()
{
	set<int > s;
	s.insert(30);
	s.insert(10);
	s.insert(20);
	s.insert(40);
	s.insert(50);
	s.insert(0);
	s.insert(0);
	s.insert(0);
	s.insert(0);
	s.insert(0);
	s.insert(0);

	int num = s.count(0);
	cout << "����Ϊ��" << num << endl;
	//����set���ԣ�coutͳ�Ƹ����ķ���ֵ��ҪôΪ1��ҪôΪ0

}

int main()
{
	//test01();
	test02();
	system("pause");
	return 1;
}