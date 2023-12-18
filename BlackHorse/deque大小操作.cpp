#include<iostream>
#include<deque>
using namespace std;


//deque容器大小操作
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
	printfDeque(d1);

	if (d1.empty())
	{
		cout << "空" << endl;
	}
	else
	{
		cout << "非空" << endl;
		cout << "大小为：" << d1.size() << endl;
	}

	d1.resize(100,66);
	printfDeque(d1);
}



int main()
{
	test01();

}