#include <iostream>
#include <string>
using namespace std;

//operator���أ���������
class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};


//�������Լ���״̬
class PrintfFun
{
public:
	int count; //ͳ�Ƹ���

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