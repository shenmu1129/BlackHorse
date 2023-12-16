#include<iostream>
#include<string>
using namespace std;

void test02()
{
	string str1 = "hello";
	str1.insert(1, "111");
	//h111ello
	cout << str1 << endl;

	//shanchu
	str1.erase(1, 3);
	cout << str1 << endl;

}


int main()
{
	test02();

}