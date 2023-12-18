#include<iostream>
#include<deque>
#include <algorithm>
using namespace std;


void printfDeque(const deque<int>& d)
{
	//如果限定只读状态，迭代器也需要改变
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_back(40);

	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);
	printfDeque(d1);

	//排序 默认排序规则 从小到大，升序
	//对于支持随机访问的迭代器，都可以利用sort进行排序
	//vector也可以利用sort算法
	sort(d1.begin(), d1.end());
	cout << "排序后 " << endl;
	printfDeque(d1);


}



int main()
{
	test01();

}