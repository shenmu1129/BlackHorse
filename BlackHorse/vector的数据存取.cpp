#include<iostream>
#include<string>
#include<vector>
using namespace std;


//vectord��Ĭ�ϴ�ȡ
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
	vector<int> v1;//Ĭ�Ϲ��죬�޲ι���

	//β��
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);

	printfVector(v1);

	//����[]�ķ�ʽ����vector�ĳ�Ա
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout  << endl;
	//����at��ʽ����vector�ĳ�Ա
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}

	cout << endl;

	cout << "��ȡ��һ��Ԫ��:" << v1.front() << endl;
	cout << "��ȡ���һ��Ԫ�أ� " << v1.back() << endl;

}

int main()
{
	test01();

}