#include<iostream>
#include<deque>
#include <algorithm>
using namespace std;


void printfDeque(const deque<int>& d)
{
	//����޶�ֻ��״̬��������Ҳ��Ҫ�ı�
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_back(40);

	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);
	printfDeque(d1);

	//���� Ĭ��������� ��С��������
	//����֧��������ʵĵ�����������������sort��������
	//vectorҲ��������sort�㷨
	sort(d1.begin(), d1.end());
	cout << "����� " << endl;
	printfDeque(d1);


}



int main()
{
	test01();

}