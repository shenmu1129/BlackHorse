#include<iostream>
#include<string>
using namespace std;

void test02()
{
	string str1 = "hello";
	//通过[]访问单个字符

	for (int i = 0; i < str1.size(); i++)
	{
		cout <<str1[i] << endl;
	}

	//通过at方法
	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1.at(i) << endl;
	}

	str1[1] = 'x';
	str1.at(1) = 'x';
}


int main()
{
	test02();

}