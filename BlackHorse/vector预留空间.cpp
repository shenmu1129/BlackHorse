#include<iostream>
#include<string>
#include<vector>
using namespace std;


//vectord��Ԥ���ռ�
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

	//����reserveԤ���ռ䣬Ԥ��10000���ռ�
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
		
	cout << "����:" << num << "���ڴ�" << endl;
}
int main()
{
	test02();

}