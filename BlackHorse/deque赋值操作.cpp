#include<iostream>
#include<deque>
using namespace std;


//deque������ֵ����
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

	deque<int> d2;
	d2 = d1;
	printfDeque(d1);

	//assgin��ֵ����
	deque<int> d3;
	d3.assign(d1.begin(), d1.end());
	printfDeque(d3);

	//n��elem��ֵ
	deque<int> d4;
	d4.assign(10, 300);
	printfDeque(d4);

}



int main()
{
	test01();

}