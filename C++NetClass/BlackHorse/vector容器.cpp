#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printfVector(vector<int> &vec)
{
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it << "  " ;
	}
	cout << endl;

}



//vector容器构造
void test01()
{
	vector<int> v1;//默认构造，无参构造

	for (int i = 0; i <	10; i++)
	{	
		v1.push_back(i);
	}

	//用区间的方式给vector赋值
	vector<int>v2(v1.begin(), v1.end());
	printfVector(v1);
	printfVector(v2);

	//用n个elem方式构造
	vector<int>v3(3, 100);
	printfVector(v3);

	//拷贝构造
	vector<int>v4(v3);
	printfVector(v4);


}

int main()
{
	test01();

}