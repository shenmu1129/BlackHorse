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
	
	Person p1("张山",100);
	Person p2("张我",100);
	Person p3("张死",100);
	Person p4("张得",100);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	while (!q.empty())
	{
		cout << "对头的元素为" << q.front().m_name << q.front().m_age<<  endl;
		cout << "对尾的元素为" << q.back().m_name << q.back().m_age << endl;

		q.pop();
	}
}

int main()
{
	test01();
	return 0;
}