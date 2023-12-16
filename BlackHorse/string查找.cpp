#include<iostream>
#include<string>
using namespace std;



void test01()
{
	string str = "abcdefg";
	//find函数，查找子串有无，如果有，返回下标（从0开始），没有返回-1

	int pos = str.find("adbc");
	if (pos != -1)
	{
		cout << "有" << endl;
	}
	else
	{
		cout << "无" << endl;
	}
	
	//rfind函数
	//rfind和find查找，rfind从右往左查，find从左往右查
	//下标的话还是从0开始计算
	pos = str.rfind("abc");
	if (pos != -1)
	{
		cout << "有"  << pos << endl;
	}
	else
	{
		cout << "无" << endl;
	}
}

void test02()
{
	string str = "abcdasdasd";
	//从1号位置起，到3号位置结束，字符替换为12312312 
	str.replace(1, 3, "12312312");
}


int main()
{
	test02();
	//test01();
}