#include<iostream>
#include<string>
#include<vector>
using namespace std;

//vector�Ĳ����ɾ��
void printfVector(vector<int>& vec)
{
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;

}



//vector��������
void test01()
{
	vector<int> v1;//Ĭ�Ϲ��죬�޲ι���

	//β��
		v1.push_back(10);
		v1.push_back(20);
		v1.push_back(30);
		v1.push_back(40);
		v1.push_back(50);
		v1.push_back(60);

	printfVector(v1);

	//βɾ
	v1.pop_back();
	printfVector(v1);

	//���룬��һ�������ǵ�����
	v1.insert(v1.begin(), 100);
	printfVector(v1);

	//����insert���صİ汾������n������
	v1.insert(v1.begin(),2, 1000);
	printfVector(v1);

	//ɾ�� ����Ҳ�ǵ�����
	v1.erase(v1.begin());
	printfVector(v1);
	
	//���
	v1.erase(v1.begin(), v1.end());
	printfVector(v1);

	//���
	v1.clear();
	printfVector(v1);



}

int main()
{
	test01();

}