#include<iostream>
#include<deque>
using namespace std;


//deque������С����
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
	d1.push_back(10);
	d1.push_back(20);

	d1.push_front(100);
	d1.push_front(200);
	printfDeque(d1);

	for (int i = 0 ; i < d1.size();i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;


}


int main()
{
	test01();

	system("pause");
}