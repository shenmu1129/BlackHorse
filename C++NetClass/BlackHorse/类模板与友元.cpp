#include<iostream>
using namespace std;
#include<string>

template<class T1 , class T2>
class Person;
//类外实现
template<class T1 ,class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
}


//通过全局函数 打印Person信息

template<class T1, class T2>
class Person
{
	//全局函数类内实现
	friend void printPerson(Person<T1, T2> p)
	{
		cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
	}

	//类外实现
	friend void printPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
private:
	T1 m_Name;
	T2 m_Age;
};
void test01()
{
	Person<string, int > per("tom", 12);
	printPerson(per);
}
void test02()
{
	Person<string, int > per("Jerry", 12);
	printPerson2(per);
}


int main()
{
	test02();
	return 1;
}