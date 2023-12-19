#include<iostream>
#include <map>
using namespace std;

void printfMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "Key:" << it->first << " Value:" << it->second << endl;
	}
}


void test01()
{

	map<int, int >m;
// pair插入
	m.insert(pair<int, int>(10, 30));

	//make_pair插入
	m.insert(make_pair(1, 30));

	//第三种
	m.insert(map<int, int>::value_type(3, 4));

	//第四种
	m[4] = 34;

	//我们通常不用第四种方式插入，可能会冲掉4本来存在的值
	//通常用第四种方法访问


	printfMap(m);
	cout << endl;


	//删除
	m.erase(m.begin());

	//按照key的方式删除
	m.erase(4);
	printfMap(m);


}

int main()
{
	test01();
	system("pause");
	return 1;
}