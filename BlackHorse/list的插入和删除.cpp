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

void test01()
{
	list<int > l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	l1.push_back(220);
	l1.push_back(4);

	printfList(l1);

	//·´×ª
	l1.reverse();
	printfList(l1);
	

}	
int main()
{

	test01();
	
	system("pause");
	return 1;
}