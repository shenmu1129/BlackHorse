#include<iostream>
#include<string>
using namespace std;

void test02()
{
		//字符串的比较是按照ASCII码进行比较的
	string str1 = "hellp";
	string str2 = "hello2";

	//==0是相等
	if (str1.compare(str2) == 0)
	{
		cout << "相等" << endl;
	}
	else if(str1.compare(str2) > 0)
	{
		cout << "str1 大" << endl;
	}
	else
	{
		cout << "str2 大" << endl;

	}

}


int main()
{
	test02();

}