#include<iostream>
#include<string>
#include<vector>
using namespace std;


//vector�����������ʹ�С
void printfVector(vector<int>& vec)
{
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;

}



//vector��������
void test01()
{
	vector<int> v1;//Ĭ�Ϲ��죬�޲ι���

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