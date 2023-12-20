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
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	sort(v.begin(), v.end());

	for (auto it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	vector<int>v2;
	v2.resize(v.size());

	transform(v.begin(), v.end(), v2.begin(),logical_not<bool>());
	for (auto it = v2.begin(); it != v2.end(); it++)
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