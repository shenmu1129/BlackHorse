#include<iostream>
#include <string>
using namespace std;
void test01()
{
	pair<string, int> p("Tom",10);
	cout << " ������" << p.first << " ����: " << p.second<< endl;

	pair<string, int > p2 = make_pair("Jerry", 22);
	cout << " ������" << p2.first << " ����: " << p2.second << endl;

}

int main()
{
	test01();

	system("pause");
	return 1;
}