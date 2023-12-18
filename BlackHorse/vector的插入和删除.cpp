#include<iostream>
#include<string>
#include<vector>
using namespace std;

//vector的插入和删除
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

	//尾插
		v1.push_back(10);
		v1.push_back(20);
		v1.push_back(30);
		v1.push_back(40);
		v1.push_back(50);
		v1.push_back(60);

	printfVector(v1);

	//尾删
	v1.pop_back();
	printfVector(v1);

	//插入，第一个参数是迭代器
	v1.insert(v1.begin(), 100);
	printfVector(v1);

	//插入insert重载的版本，插入n个数据
	v1.insert(v1.begin(),2, 1000);
	printfVector(v1);

	//删除 参数也是迭代器
	v1.erase(v1.begin());
	printfVector(v1);
	
	//清空
	v1.erase(v1.begin(), v1.end());
	printfVector(v1);

	//清空
	v1.clear();
	printfVector(v1);



}

int main()
{
	test01();

}