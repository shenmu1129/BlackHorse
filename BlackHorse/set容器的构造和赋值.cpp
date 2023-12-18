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
	//两个特点，1.插入会自动排序，2.不允许插入重复的数字

	//拷贝构造
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