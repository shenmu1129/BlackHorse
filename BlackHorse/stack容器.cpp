#include <stack>
using namespace std;
#include <iostream>

//ջstack����
void test01()
{
	//�ص㣺���������������ݽṹ
	stack<int>s;

	//��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout << "ջ�Ĵ�СΪ��" << s.size() << endl;

	//ֻҪջ��Ϊ�գ��鿴ջ��Ԫ�أ���ִ�г�ջ����
	while (!s.empty())
	{
		//�鿴ջ��Ԫ��
		cout << s.top() << endl;

		//��ս
		s.pop();
	}

	cout << "ջ�Ĵ�СΪ��" << s.size() << endl;

}
int main()
{
	test01();
}