#include<iostream>
using namespace std;
template<class T>
class Base
{
	T m;
};

//	class Son :public Base 错误，必须知道父类的类型
class Son :public Base<int>
{
};
// 如果想灵活指定父类中的T类型，子类也需要变成类模板
template<class T1,class T2>
class Son1 :public Base<T1>
{
public:
	Son1()
	{
		std::cout << "T1的类型为：" << typeid(T1).name() << std::endl;
		std::cout << "T2的类型为：" << typeid(T2).name() << std::endl;
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