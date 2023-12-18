#include<iostream>
#include <list>
using namespace std;

void printfList(list<int> &L)
{
	for (list<int>::iterator it = L.begin() ; it != L.end() ; it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int > l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	printfList(l1);
	//拷贝构造
	list<int> l2(l1);
	printfList(l2);

	//区间赋值
	list<int> l3(l1.begin(), l1.end());
	printfList(l3);

	//n个elem
	list<int> l4(10, 200);
	printfList(l4);

}
int main()
{

	test01();
	return 1;
}