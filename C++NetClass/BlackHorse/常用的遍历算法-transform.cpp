#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Trans
{
public:
	int operator()(int val)
	{
		return val + 100;
	}
};

class Print1
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), Print1());

	cout << endl;

	vector<int > v2;
	v2.resize(v.size());

	transform(v.begin(), v.end(), v2.begin(), Trans());

	for_each(v2.begin(), v2.end(), Print1());

}

int main()
{
	test01();
	system("pause");
	return 1;
}