#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printfVector(vector<int> &vec)
{
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it << "  " ;
	}
	cout << endl;

}



//vector��������
void test01()
{
	vector<int> v1;//Ĭ�Ϲ��죬�޲ι���

	for (int i = 0; i <	10; i++)
	{	
		v1.push_back(i);
	}

	//������ķ�ʽ��vector��ֵ
	vector<int>v2(v1.begin(), v1.end());
	printfVector(v1);
	printfVector(v2);

	//��n��elem��ʽ����
	vector<int>v3(3, 100);
	printfVector(v3);

	//��������
	vector<int>v4(v3);
	printfVector(v4);


}

int main()
{
	test01();

}