#include<iostream>
#include"MyArray.hpp"
using namespace std;
#include<string>

void printIntArray(MyArray<int > arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}



class Person
{
public:
	int m_age;
	string m_name;

	Person() {};
	Person(string name , int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

};

void printIntArray2(MyArray<Person >& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "����Ϊ:" << arr[i].m_name << "����Ϊ:" << arr[i].m_age << endl;
	}
}

void test02()
{
	MyArray<Person> arr(10);
	Person p1("����", 10);
	Person p2("����", 11);
	Person p3("����", 12);
	Person p4("����", 13);
	Person p5("�Ţ�", 14);
	Person p6("�Ţ�", 15);
	Person p7("�Ţ�", 16);

	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);
	arr.Push_Back(p6);
	arr.Push_Back(p7);
	
	cout << "arr��������ݣ�" <<endl;
	printIntArray2(arr);
	cout << "arr������Ϊ��" << arr.getCapacity() << endl;
	cout << "arr�Ĵ�СΪ��" << arr.getSize() << endl;

}

void test01()
{
	MyArray<int > arr(5);

	for (int i = 0; i < 5; i++)
	{
		arr.Push_Back(i);
	}
	cout << "arr�Ĵ�ӡ�����" << endl;
	printIntArray(arr);


	cout << "arr������Ϊ" << arr.getCapacity() << endl;
	cout << "arr�Ĵ�СΪ" << arr.getSize() << endl;

	MyArray<int > arr2(arr);

	cout << "arr�Ĵ�ӡ�����" << endl;
	printIntArray(arr2);

	//βɾ
	arr2.Pop_Back();

	cout << "arr2βɾ��" << endl;

	cout << "arr2������Ϊ" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ" << arr2.getSize() << endl;
	//MyArray <int > arr3(100);
	//arr3 = arr;
}

int  main()
{

	//test01();
	test02();
	return 1;

}