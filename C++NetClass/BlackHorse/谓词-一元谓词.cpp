#include <iostream>
#include <string>
#include <vector>
using namespace std;

//����bool���͵ĺ��������Ϊν��
//���Ĳ�����һ��ΪһԪν�ʡ�
//����������Ϊ��Ԫν��
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
	//find_if���ص��ǵ�����������ҵ��˾ͷ���ֵ��û�ҵ�����v.end()
	 auto it = find_if(v.begin(), v.end(), GFive());

	 if (it == v.end())
	 {
		 cout << "û�ҵ�" << endl;
	 }
	 else
	 {
		 cout << "�ҵ���:" <<  *it << endl;
	 }

}



int main()
{
	test01();
	system("pause");
	return 1;
}