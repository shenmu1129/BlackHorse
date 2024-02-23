#include<iostream>
#include <map>
using namespace std;


void test01()
{
	//insert²åÈë
	map<int, int >m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(19, 190));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(6, 60));

	for (map<int ,int>::iterator it = m.begin() ; it!= m.end() ; it++)
	{
		cout << "Key:" << it->first << " Value:" << it->second << endl;
	}

	//¹¹Ôì
	map<int,int> m2(m);
	for (map<int, int>::iterator it = m2.begin(); it != m2.end(); it++)
	{
		cout << "Key:" << it->first << " Value:" << it->second << endl;
	}

}

int main()
{
	test01();
	system("pause");
	return 1;
}