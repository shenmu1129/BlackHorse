#include<iostream>
using namespace std;
#include<string>

template<class T1 , class T2>
class Person
{
public:
	Person(T1 name, T2 age);
		//{
		//	this->m_Age = age;
		//	this->m_Name = name;
		//}

		void showPerson();
	//{
	//	cout << "姓名：" << this->m_Name << "年龄：" << this->m_Age << endl;
	//}

	T1 m_Name;
	T2 m_Age;
};

template<class T1 ,class T2>
Person<T1 ,T2>::Person(T1 name , T2 age)
{
	this->m_Age = age;
	this->m_Name = name;
}

template<class T1 , class T2>
void Person<T1, T2>::showPerson()
{
	cout << "姓名：" << this->m_Name << "年龄：" << this->m_Age << endl;
}

void test01()
{
	Person<string, int > per("tom", 12);
	per.showPerson();
}

int main()
{
	test01();
	return 1;
}