#include<iostream>
#include <list>
using namespace std;

void printfList(list<int>& L)
{
	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool comparee(int v1, int v2)
{
	return v1 > v2;
}
void test01()
{
	list<int > l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	l1.insert(l1.begin(), 202);
	printfList(l1);

	//反转
	l1.reverse();
	printfList(l1);
	
	//排序默认为升序
	l1.sort();
	printfList(l1);

	//自定义排序
	l1.sort(comparee);
	printfList(l1);

}
int main()
{

	test01();
	system("pause");
	return 1;
}