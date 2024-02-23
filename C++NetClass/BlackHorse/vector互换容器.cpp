#include<iostream>
#include<string>
#include<vector>
using namespace std;


//vectord的互换
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
	vector<int> v2;//默认构造，无参构造

	//尾插
	v2.push_back(60);
	v2.push_back(50);
	v2.push_back(40);
	v2.push_back(30);
	v2.push_back(20);
	v2.push_back(10);

	cout << "交换前：" << endl;
	printfVector(v1);
	printfVector(v2);


	v1.swap(v2);
	cout << "交换后：" << endl;
	printfVector(v1);
	printfVector(v2);
}

void test02()
{
	vector<int> v;
	//巧用swap收缩内存
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	v.resize(3);
	cout << "v执行resize后的容量为：" << v.capacity() << endl;
	cout << "v执行resize后的大小为：" << v.size() << endl;

	//利用swap收缩内存
	vector<int>(v).swap(v);
	cout << "v执行swap后的容量为：" << v.capacity() << endl;
	cout << "v执行swap后的大小为：" << v.size() << endl;

}
int main()
{
	//test01();
	test02();

}