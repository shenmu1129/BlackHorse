#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArray
{
public:

	//有参构造
	MyArray(int capacity)
	{
	//	cout << "有参构造" << endl;
		this->m_Capacity = capacity;
		this->m_size = 0;
		this->pAddress = new T[capacity];
	}

	//拷贝构造
	MyArray(const MyArray& arr)
	{
	//	cout << "拷贝构造" << endl;

		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;

		//深拷贝
		this->pAddress = new T[arr.m_Capacity];
		for (auto i = 0 ; i <  this->m_size ; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//operate = 防止浅拷贝的问题
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "operator=" << endl;

		//先判断原来的堆区是否有数据，如果有先释放干净
		if (!this->pAddress)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;	
			this->m_size = 0;
			this->m_Capacity = 0;
		}

		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;
		this->pAddress = new T[arr.m_Capacity];
		for (auto i = 0; i < this->m_size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;
	}

	//尾插法插入数据
	void Push_Back(const T& val)
	{
		//判断容量是否相当
		if (this->m_Capacity == this->m_size)
		{
			return;
		}
		this->pAddress[this->m_size] = val;//在数组末尾插入元素val
		this->m_size++;//更新数组元素个数
	}

	//尾删法
	void Pop_Back()
	{
		//让用户访问不到，即删掉了元素
		if (this->m_size == 0)
		{
			return;
		}
		this->m_size--;
	}

	//通过下标的方式访问数据,因为可能要用到赋值操作，我们需要返回个左值
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//返回数组容量
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//返回数组大小
	int getSize()
	{
		return this->m_size;
	}
	//析构函数
	~MyArray()
	{
	//	cout << "析构" << endl;

		if (!this->pAddress)
		{
			delete[] this->pAddress;
		}
		this->pAddress = NULL;
	}

private:
	T* pAddress;//指针指向堆区开辟的真实数组

	int m_Capacity;//数组容量

	int m_size;//数组大小

};