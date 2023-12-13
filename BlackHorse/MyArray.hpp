#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArray
{
public:

	//�вι���
	MyArray(int capacity)
	{
	//	cout << "�вι���" << endl;
		this->m_Capacity = capacity;
		this->m_size = 0;
		this->pAddress = new T[capacity];
	}

	//��������
	MyArray(const MyArray& arr)
	{
	//	cout << "��������" << endl;

		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;

		//���
		this->pAddress = new T[arr.m_Capacity];
		for (auto i = 0 ; i <  this->m_size ; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//operate = ��ֹǳ����������
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "operator=" << endl;

		//���ж�ԭ���Ķ����Ƿ������ݣ���������ͷŸɾ�
		if (!this->pAddress)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;	
			this->m_size = 0;
			this->m_Capacity = 0;
		}

		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;
		this->pAddress = new T[arr.m_Capacity];
		for (auto i = 0; i < this->m_size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;
	}

	//β�巨��������
	void Push_Back(const T& val)
	{
		//�ж������Ƿ��൱
		if (this->m_Capacity == this->m_size)
		{
			return;
		}
		this->pAddress[this->m_size] = val;//������ĩβ����Ԫ��val
		this->m_size++;//��������Ԫ�ظ���
	}

	//βɾ��
	void Pop_Back()
	{
		//���û����ʲ�������ɾ����Ԫ��
		if (this->m_size == 0)
		{
			return;
		}
		this->m_size--;
	}

	//ͨ���±�ķ�ʽ��������,��Ϊ����Ҫ�õ���ֵ������������Ҫ���ظ���ֵ
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//������������
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//���������С
	int getSize()
	{
		return this->m_size;
	}
	//��������
	~MyArray()
	{
	//	cout << "����" << endl;

		if (!this->pAddress)
		{
			delete[] this->pAddress;
		}
		this->pAddress = NULL;
	}

private:
	T* pAddress;//ָ��ָ��������ٵ���ʵ����

	int m_Capacity;//��������

	int m_size;//�����С

};