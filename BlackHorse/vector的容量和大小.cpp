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
		cout << "v1 Ϊ��" << endl;
	}
	else
	{
		cout << "v1 ��Ϊ��" << endl;
		cout << "v1������Ϊ" << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ" << v1.size() << endl;
	}
	v1.resize(15);
	//������·���Ŀռ��ԭ���Ĵ���0������µ�λ��
	//Ҳ�����صİ汾������ָ��Ĭ�ϵ����ֵ
	v1.resize(15, 100);
	printfVector(v1);
	//������·���Ŀռ��ԭ����С����ɾ�������Ĳ���
	v1.resize(4);
	printfVector(v1);

}

int main()
{
	test01();

}