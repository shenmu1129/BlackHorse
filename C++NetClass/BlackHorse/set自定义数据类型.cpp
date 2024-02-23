#include<iostream>
#include <set>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	string m_Name;
	int m_Age;
};

//�����Զ�����������ͣ����Ƕ���ָ������������÷º���
class ComparePerson
{
public:
	bool operator()(const Person &a,const Person &b) const
	{
		return a.m_Age > b.m_Age;
	}
};

void test01()
{
	Person p1("����", 3);
	Person p2("����a", 43);
	Person p3("����s", 33);
	Person p4("����d", 23);

	set<Person, ComparePerson> s2;
	s2.insert(p1);
	s2.insert(p2);
	s2.insert(p3);
	s2.insert(p4);

	for (set<Person, ComparePerson>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << "������" << it->m_Name << "���䣺" << it->m_Age << endl;;
	}
	cout << endl;

}
int main()
{
	test01();

	system("pause");
	return 1;
}