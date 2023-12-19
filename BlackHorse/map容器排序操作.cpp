#include<iostream>
#include <map>
using namespace std;

class MyCompare
{
public:
	bool operator() (const int &a,const int &b)const
	{
		return a > b;
	}
};

void test01()
{
	//insert²åÈë
	map<int, int , MyCompare>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(19, 190));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(6, 60));

	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
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