#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void printf1(int val)
{
	cout << "STL�㷨�����" << val << endl;
}



int  main()
{
	//������һ����������vector
	vector<int > v;

	//��vector���������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);

	//ͨ�����������������е�����
	vector<int>::iterator itBegin = v.begin();//��Ԫ��ָ��
	vector<int>::iterator itEnd = v.end();//β��ָ��

	//��һ��ѭ���������
	while (itBegin != itEnd)
	{
		cout << *itBegin++ << endl;
	}

	//�ڶ���ѭ��
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << endl;
	}

	//������ѭ������,��STL�ṩ�ı����㷨
	for_each(v.begin(), v.end(), printf1);

	//������ѭ����������Χfor��ʽ
	for (auto i :v)
	{
		cout << "��Χfor��ʽ�����" << i << endl;
	}


}