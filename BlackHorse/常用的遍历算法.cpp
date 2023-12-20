#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//�Զ��庯��
void printF(int val)
{
	cout << val << " ";
}

//�º���
class print2
{
public:
	bool operator()(int val)
	{
		cout << val << " ";

		return 1;
	}
};


void test01()
{
	vector<int> v;
	for (int i = 0 ; i < 10 ; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), printF); 
	cout << endl;
	for_each(v.begin(), v.end(), print2());

}

int main()
{
	test01();
	system("pause");
	return 1;
}