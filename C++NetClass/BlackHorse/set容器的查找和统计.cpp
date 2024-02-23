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

	//set容器的find函数，如果找到了就返回iter，没找到就返回s.end()
	if (it != s.end())
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "没找到" << endl;

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
	cout << "个数为：" << num << endl;
	//对于set而言，cout统计个数的返回值，要么为1，要么为0

}

int main()
{
	//test01();
	test02();
	system("pause");
	return 1;
}