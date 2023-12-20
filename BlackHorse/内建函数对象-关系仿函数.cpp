#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

class Mycompare
{
public:
	bool operator()(int val, int val2)
	{
		return val > val2;
	}
};


void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(150);
	v.push_back(120);
	v.push_back(3);

	sort(v.begin(), v.end());

	for (auto it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	cout << "-------------------------------------------" << endl;

	//自己定义的仿函数
	//sort(v.begin(), v.end(), Mycompare());
	sort(v.begin(), v.end(), greater<int>());
	for (auto it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";	
	}
	cout << endl;

}

int main()
{
	test01();
	system("pause");
	return 1;
}