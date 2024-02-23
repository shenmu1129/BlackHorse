#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void printf1(int val)
{
	cout << "STL算法输出：" << val << endl;
}



int  main()
{
	//创建了一个容器数组vector
	vector<int > v;

	//向vector中添加数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);

	//通过迭代器访问容器中的数据
	vector<int>::iterator itBegin = v.begin();//首元素指针
	vector<int>::iterator itEnd = v.end();//尾后指针

	//第一种循环输出方法
	while (itBegin != itEnd)
	{
		cout << *itBegin++ << endl;
	}

	//第二种循环
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << endl;
	}

	//第三种循环方法,用STL提供的遍历算法
	for_each(v.begin(), v.end(), printf1);

	//第四种循环方法，范围for方式
	for (auto i :v)
	{
		cout << "范围for方式输出：" << i << endl;
	}


}