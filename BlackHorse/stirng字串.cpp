#include<iostream>
#include<string>
using namespace std;


//string 求字串
void test02()
{
	string str1 = "hello";
	//从某个位置开始，截多少个
	string subStr = str1.substr(1, 3);
	cout << subStr << endl;


}

void test03()
{
	string str1 = "hello11@sina.com";
	//从邮件地址中获取用户名
	int pos = str1.find('@');

	string subStr = str1.substr(0, pos);

	cout << subStr << endl;


}

int main()
{
	test03();

}