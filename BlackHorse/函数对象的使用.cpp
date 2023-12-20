#include <iostream>
#include <string>
using namespace std;

//operator重载（）操作符
class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};


//可以有自己的状态
class PrintfFun
{
public:
	int count; //统计个数

	PrintfFun()
	{
		count = 0;
	}

	void operator()(string str)
	{
		cout << str << endl;
		count++;
	}
};



void test01()
{
	MyAdd myAdd;

	cout << myAdd(10, 10) << endl;
}


void test02()
{
	PrintfFun pf;
	pf("aaaaaaaaaaaaaaa");
	pf("aaaaaaaaaaaaaaa");
	pf("aaaaaaaaaaaaaaa");
	pf("aaaaaaaaaaaaaaa");
	pf("aaaaaaaaaaaaaaa");
	pf("aaaaaaaaaaaaaaa");

	cout << pf.count << endl;
}

void printfV(PrintfFun& pf, string str)
{
	pf(str);
}

void test03()
{
	PrintfFun pf;
	printfV(pf, "shadiao");
}

int main()
{
	test03();
	//test02();
	//test01();
	system("pause");
	return 1;
}