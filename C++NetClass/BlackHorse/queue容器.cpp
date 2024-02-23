#include<iostream>
#include <queue>
#include <string>
using namespace std;

class Person
{

public:

	Person(string name,int age)
	{
		m_name = name;
		m_age = age;
	}
	string m_name;
	int m_age;
};

void test01()
{
	queue<Person>q;
	
	Person p1("��ɽ",100);
	Person p2("����",100);
	Person p3("����",100);
	Person p4("�ŵ�",100);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	while (!q.empty())
	{
		cout << "��ͷ��Ԫ��Ϊ" << q.front().m_name << q.front().m_age<<  endl;
		cout << "��β��Ԫ��Ϊ" << q.back().m_name << q.back().m_age << endl;

		q.pop();
	}
}

int main()
{
	test01();
	return 0;
}