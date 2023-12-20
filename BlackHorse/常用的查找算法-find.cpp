#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Trans
{
public:
	int operator()(int val)
	{
		return val + 100;
	}
};

class Print1
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

class Person
{
public:
	int m_age;
	string m_name;

	bool operator==(Person p)
	{
		if (p.m_age == m_age && p.m_name == m_name)
		{
			return true;
		}
		else
		{
			return false;
		}
	}


	Person(int age, string name)
	{
		m_age = age;
		m_name = name;
	}
};

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	auto it = find(v.begin(), v.end(), 5);

	if (it!= v.end())
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "没找到" << endl;
	}

}

void test02()
{
	Person p1(13, "zjhangsa");
	Person p2(12, "c");
	Person p3(11, "v");
	Person p4(33, "a");
	Person p5(23, "q");

	vector<Person> v;
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	auto it =	find(v.begin(), v.end(), Person(4,"c"));

	if (it != v.end())
	{
		cout << "找到了 " << endl;
	}
	else
	{
		cout << "没找到 " << endl;

	}

}
int main()
{
	test02();
	//test01();
	system("pause");
	return 1;
}