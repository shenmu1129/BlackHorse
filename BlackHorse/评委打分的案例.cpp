#include<iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>
#include <ctime>
using namespace std;

//ѡ����
class Person
{
public:
	Person(string name, int score)
	{
		this->m_Score = score;
		this->m_Name = name;
	}

	string m_Name;//ѡ������
	int m_Score;//ƽ����
};

void setScore(vector<Person>& v)
{
	for (auto it = v.begin(); it!= v.end();it++)
	{
		deque<int> d;
		//���
		for (int i = 0 ; i < 10 ; i++)
		{
			int score = rand() % 40 + 60;//60~100
			d.push_back(score);
		}

		//����
		sort(d.begin(), d.end());


		//���Դ��
// 		cout << "����Ϊ��" << it->m_Name << endl;
// 		cout << "��֣�" << " ";
// 		for (auto it1 = d.begin(); it1 != d.end(); it1++)
// 		{
// 			cout << *it1 << " ";
// 		}
// 		cout << endl;

		//ȥ����߷ֺ���ͷ�
		d.pop_back();
		d.pop_front();

		//ȡƽ����
		int sum = 0;
		for (auto it1 = d.begin();it1 != d.end(); it1++)
		{
			sum += *it1;
		}
		int score = sum / d.size();

		it->m_Score = score;
	}
}

void createPerson(vector<Person>& v)
{
	string personSeed = "ABCDE";
	for (int i = 0 ; i < 5 ;i++)
	{
		string name = "ѡ��";
		name += personSeed[i];
		int score = 0;//Ĭ��0��
		Person p(name, score);
		v.push_back(p);
	}
}

void showScore(vector<Person> &v)
{
	for (auto it = v.begin() ; it != v.end() ; it++)
	{
		cout << "����Ϊ��" << it->m_Name << "����Ϊ��" << it->m_Score << endl;
	}
}
int main()
{
	//���������
	srand((unsigned int)time(NULL));


	//��������ѡ��
	vector<Person> v;
	createPerson(v);
	//�������
// 	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
// 	{
// 		cout << "������" << it->m_Name << "  ����" << it->m_Score << endl;
//  	}

	//��ί���
	setScore(v);

	//��ʾ�÷�
	showScore(v);
	system("pause");
}