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
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printfDeque(d1);

	if (d1.empty())
	{
		cout << "��" << endl;
	}
	else
	{
		cout << "�ǿ�" << endl;
		cout << "��СΪ��" << d1.size() << endl;
	}

	d1.resize(100,66);
	printfDeque(d1);
}



int main()
{
	test01();

}