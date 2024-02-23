#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//查找内置数据类型
class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};



void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	auto it = find_if(v.begin(), v.end(), GreaterFive());

	if (it != v.end())
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "没找到" << endl;
	}

}

int main()
{
	test01();
	system("pause");
	return 1;
}