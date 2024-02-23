#include<iostream>
using namespace std;
#include<string>

template<class T1 , class T2>
class Person;
//����ʵ��
template<class T1 ,class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "������" << p.m_Name << "���䣺" << p.m_Age << endl;
}


//ͨ��ȫ�ֺ��� ��ӡPerson��Ϣ

template<class T1, class T2>
class Person
{
	//ȫ�ֺ�������ʵ��
	friend void printPerson(Person<T1, T2> p)
	{
		cout << "������" << p.m_Name << "���䣺" << p.m_Age << endl;
	}

	//����ʵ��
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