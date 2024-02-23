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
	s.insert(20);
	s.insert(40);
	s.insert(50);
	s.insert(0);

	pair<set<int>::iterator, bool> ret = s.insert(10);
	
	if (ret.second)
	{
		cout << "第一次插入成功" << endl;
	}
	else
	{
		cout << "第一次插入失败" << endl;
	}

	 ret = s.insert(10);
	 if (ret.second)
	 {
		 cout << "第二次插入成功" << endl;
	 }
	 else
	 {
		 cout << "第二次插入失败" << endl;
	 }

	 multiset<int > ms;
	 ms.insert(10);
	 ms.insert(10);

	 cout << ms.size() << endl;

}



int main()
{
	test01();

	system("pause");
	return 1;
}