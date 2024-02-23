#include<iostream>
#include<deque>
using namespace std;


void printfDeque(const deque<int> &d)
{
	//如果限定只读状态，迭代器也需要改变
	for (deque<int>::const_iterator it = d.begin() ; it != d.end() ; it++)
	{
		cout << *it << " ";
	}
	cout <<  endl;
}


void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printfDeque(d1);

	//用区间方式赋值
	deque<int> d2(d1.begin(), d1.end());
	printfDeque(d2); 

	//n个elem元素
	deque<int> d3(10, 100);
	printfDeque(d3);

	//拷贝构造
	deque<int> d4(d3);
	printfDeque(d4);
}



int main()
{
	test01();

}