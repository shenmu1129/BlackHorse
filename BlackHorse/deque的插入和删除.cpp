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

	d1.pop_back();
	printfDeque(d1);

	d1.pop_front();
	printfDeque(d1);
}

void test02()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);

	d1.push_front(100);
	d1.push_front(200);
	printfDeque(d1);

	d1.insert(d1.begin(),10000);
	printfDeque(d1);

	d1.insert(d1.begin(),3, 10000);
	printfDeque(d1);

	//����������в���
	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	
	d1.insert(d1.begin(), d2.begin(), d2.end());
	printfDeque(d1);

}

void test03()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);

	d1.push_front(100);
	d1.push_front(200);
	printfDeque(d1);

	deque<int>::iterator it = d1.begin();

	it++;
	d1.erase(it);
	printfDeque(d1);

	//������ķ�ʽɾ��
// 	d1.erase(d1.begin(), d1.end());
// 	printfDeque(d1);
	
	//��ղ���
	d1.clear();
	printfDeque(d1);
}

int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
}