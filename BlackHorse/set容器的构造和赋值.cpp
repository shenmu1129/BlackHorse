#include<iostream>
#include <set>
using namespace std;

void printfSet(set<int> &S)
{
	for (auto it = S.begin() ; it!= S.end(); it++)
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

	printfSet(s);
	//�����ص㣬1.������Զ�����2.����������ظ�������

	//��������
	set<int> s1(s);
	printfSet(s1);

	//=
	set<int > s2 = s;
	printfSet(s2);

}
int main()
{
	test01();

	system("pause");
	return 1;
}