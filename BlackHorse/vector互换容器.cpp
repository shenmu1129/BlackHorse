#include<iostream>
#include<string>
#include<vector>
using namespace std;


//vectord�Ļ���
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
	vector<int> v2;//Ĭ�Ϲ��죬�޲ι���

	//β��
	v2.push_back(60);
	v2.push_back(50);
	v2.push_back(40);
	v2.push_back(30);
	v2.push_back(20);
	v2.push_back(10);

	cout << "����ǰ��" << endl;
	printfVector(v1);
	printfVector(v2);


	v1.swap(v2);
	cout << "������" << endl;
	printfVector(v1);
	printfVector(v2);
}

void test02()
{
	vector<int> v;
	//����swap�����ڴ�
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;

	v.resize(3);
	cout << "vִ��resize�������Ϊ��" << v.capacity() << endl;
	cout << "vִ��resize��Ĵ�СΪ��" << v.size() << endl;

	//����swap�����ڴ�
	vector<int>(v).swap(v);
	cout << "vִ��swap�������Ϊ��" << v.capacity() << endl;
	cout << "vִ��swap��Ĵ�СΪ��" << v.size() << endl;

}
int main()
{
	//test01();
	test02();

}