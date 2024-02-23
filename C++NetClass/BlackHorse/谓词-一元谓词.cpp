#include <iostream>
#include <string>
#include <vector>
using namespace std;

//返回bool类型的函数对象称为谓词
//传的参数有一个为一元谓词。
//参数有两个为二元谓词
class GFive
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
	for (int i = 0 ; i < 10 ;i++)
	{
		v.push_back(i);
	}
	//find_if返回的是迭代器，如果找到了就返回值，没找到返回v.end()
	 auto it = find_if(v.begin(), v.end(), GFive());

	 if (it == v.end())
	 {
		 cout << "没找到" << endl;
	 }
	 else
	 {
		 cout << "找到了:" <<  *it << endl;
	 }

}



int main()
{
	test01();
	system("pause");
	return 1;
}