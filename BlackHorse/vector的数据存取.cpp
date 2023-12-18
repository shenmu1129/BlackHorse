#include<iostream>
#include<string>
#include<vector>
using namespace std;


//vectord的默认存取
void printfVector(vector<int>& vec)
{
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;

}



void test01()
{
	vector<int> v1;//默认构造，无参构造

	//尾插
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);

	printfVector(v1);

	//利用[]的方式访问vector的成员
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout  << endl;
	//利用at方式访问vector的成员
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}

	cout << endl;

	cout << "获取第一个元素:" << v1.front() << endl;
	cout << "获取最后一个元素： " << v1.back() << endl;

}

int main()
{
	test01();

}