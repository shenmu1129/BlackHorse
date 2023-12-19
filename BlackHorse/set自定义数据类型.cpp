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

//对于自定义的数据类型，我们都会指定排序规则，利用仿函数
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
	Person p1("张三", 3);
	Person p2("张三a", 43);
	Person p3("张三s", 33);
	Person p4("张三d", 23);

	set<Person, ComparePerson> s2;
	s2.insert(p1);
	s2.insert(p2);
	s2.insert(p3);
	s2.insert(p4);

	for (set<Person, ComparePerson>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << "姓名：" << it->m_Name << "年龄：" << it->m_Age << endl;;
	}
	cout << endl;

}
int main()
{
	test01();

	system("pause");
	return 1;
}