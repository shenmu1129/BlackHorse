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
		cout << "名字为:" << arr[i].m_name << "年龄为:" << arr[i].m_age << endl;
	}
}

void test02()
{
	MyArray<Person> arr(10);
	Person p1("张三", 10);
	Person p2("张四", 11);
	Person p3("张五", 12);
	Person p4("张六", 13);
	Person p5("张⑦", 14);
	Person p6("张Ⅷ", 15);
	Person p7("张⑨", 16);

	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);
	arr.Push_Back(p6);
	arr.Push_Back(p7);
	
	cout << "arr输出的数据：" <<endl;
	printIntArray2(arr);
	cout << "arr的容量为：" << arr.getCapacity() << endl;
	cout << "arr的大小为：" << arr.getSize() << endl;

}

void test01()
{
	MyArray<int > arr(5);

	for (int i = 0; i < 5; i++)
	{
		arr.Push_Back(i);
	}
	cout << "arr的打印输出：" << endl;
	printIntArray(arr);


	cout << "arr的容量为" << arr.getCapacity() << endl;
	cout << "arr的大小为" << arr.getSize() << endl;

	MyArray<int > arr2(arr);

	cout << "arr的打印输出：" << endl;
	printIntArray(arr2);

	//尾删
	arr2.Pop_Back();

	cout << "arr2尾删后：" << endl;

	cout << "arr2的容量为" << arr2.getCapacity() << endl;
	cout << "arr2的大小为" << arr2.getSize() << endl;
	//MyArray <int > arr3(100);
	//arr3 = arr;
}

int  main()
{

	//test01();
	test02();
	return 1;

}