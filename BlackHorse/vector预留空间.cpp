#include<iostream>
#include<string>
#include<vector>
using namespace std;


//vectord的预留空间
void printfVector(vector<int>& vec)
{
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;

}

void test02()
{
	vector<int> v;

	//利用reserve预留空间，预留10000个空间
	v.reserve(10000);
	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
		
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}

	}
		
	cout << "分配:" << num << "次内存" << endl;
}
int main()
{
	test02();

}