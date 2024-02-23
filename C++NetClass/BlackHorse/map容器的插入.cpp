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
// pair����
	m.insert(pair<int, int>(10, 30));

	//make_pair����
	m.insert(make_pair(1, 30));

	//������
	m.insert(map<int, int>::value_type(3, 4));

	//������
	m[4] = 34;

	//����ͨ�����õ����ַ�ʽ���룬���ܻ���4�������ڵ�ֵ
	//ͨ���õ����ַ�������


	printfMap(m);
	cout << endl;


	//ɾ��
	m.erase(m.begin());

	//����key�ķ�ʽɾ��
	m.erase(4);
	printfMap(m);


}

int main()
{
	test01();
	system("pause");
	return 1;
}