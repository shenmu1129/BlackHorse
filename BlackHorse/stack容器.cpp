#include <stack>
using namespace std;
#include <iostream>

//栈stack容器
void test01()
{
	//特点：符合先入后出的数据结构
	stack<int>s;

	//入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout << "栈的大小为：" << s.size() << endl;

	//只要栈不为空，查看栈顶元素，并执行出栈操作
	while (!s.empty())
	{
		//查看栈顶元素
		cout << s.top() << endl;

		//出战
		s.pop();
	}

	cout << "栈的大小为：" << s.size() << endl;

}
int main()
{
	test01();
}