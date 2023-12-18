#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printfVector(vector<int>& vec)
{
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;

}



//vector容器构造
void test01()
{
	vector<int> v1;//默认构造，无参构造

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	printfVector(v1);
	if (v1.empty())
	{
		cout << "v1 为空" << endl;
	}
	else
	{
		cout << "v1 不为空" << endl;
		cout << "v1的容量为" << v1.capacity() << endl;
		cout << "v1的大小为" << v1.size() << endl;
	}
	v1.resize(15);
	//如果重新分配的空间比原来的大，用0来填充新的位置
	//也有重载的版本，用来指定默认的填充值
	v1.resize(15, 100);
	printfVector(v1);
	//如果重新分配的空间比原来的小，会删掉超出的部分
	v1.resize(4);
	printfVector(v1);

}

int main()
{
	test01();

}