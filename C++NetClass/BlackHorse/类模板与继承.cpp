#include<iostream>
using namespace std;
template<class T>
class Base
{
	T m;
};

//	class Son :public Base ���󣬱���֪�����������
class Son :public Base<int>
{
};
// ��������ָ�������е�T���ͣ�����Ҳ��Ҫ�����ģ��
template<class T1,class T2>
class Son1 :public Base<T1>
{
public:
	Son1()
	{
		std::cout << "T1������Ϊ��" << typeid(T1).name() << std::endl;
		std::cout << "T2������Ϊ��" << typeid(T2).name() << std::endl;
	}
	T1 obj;
};

void test01()
{
//	Son s1;
	Son1<int, char> s2;
}

int main() 
{
	test01();

	return 1;

}