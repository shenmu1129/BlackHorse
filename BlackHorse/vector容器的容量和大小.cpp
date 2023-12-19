#include<iostream>
#include<string>
#include<vector>
using namespace std;


//vector容器的容量和大小
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

	}
}

int main()
{
	test01();

}