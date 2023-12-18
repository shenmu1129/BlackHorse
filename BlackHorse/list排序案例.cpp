#include<iostream>
#include <string>
#include <list>
using namespace std;



class Person
{
public:
	Person(string name, int age , int height)
	{
		m_name = name;
		m_age = age;
		m_height = height;
	}
	string m_name;
	int		m_age;
	int		m_height;

};

void printfList(list<Person>& L)
{
	for (auto it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << it->m_name << "年龄：" << it->m_age << "身高：" << it->m_height << endl;
	}
	cout << endl;
}

bool comparee(Person v1, Person v2)
{
	if (v1.m_age == v2.m_age)
	{
		return v1.m_height > v2.m_height;
	}
	return v1.m_age > v2.m_age;
}
void test01()
{
	Person p1("张三", 13, 178);
	Person p2("张si", 15, 169);
	Person p3("张wu", 1, 22);
	Person p4("张liu", 122, 169);
	Person p5("张qi", 1, 122);
	Person p6("张ba", 1, 33);

	list<Person> l;
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);
	l.push_back(p6);

	l.sort(comparee);
	printfList(l);
}
int main()
{

	test01();
	system("pause");
	return 1;
}