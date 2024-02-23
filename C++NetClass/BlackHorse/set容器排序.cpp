#include<iostream>
#include <set>
using namespace std;

//默认从小到大排序
//利用仿函数，可以改变排序规则
class MyCompare
{
public:
	bool operator()(int a ,int b) const
	{
		return a > b;
	}
};


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

	printfSet(s);

	set<int, MyCompare> s2;
	s2.insert(30);
	s2.insert(10);
	s2.insert(20);
	s2.insert(40);
	s2.insert(50);
	s2.insert(0);

	for (set<int, MyCompare>::iterator it = s2.begin() ; it != s2.end() ; it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}
int main()
{
	test01();

	system("pause");
	return 1;
}