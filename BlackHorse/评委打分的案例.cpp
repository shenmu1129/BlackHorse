#include<iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>
#include <ctime>
using namespace std;

//选手类
class Person
{
public:
	Person(string name, int score)
	{
		this->m_Score = score;
		this->m_Name = name;
	}

	string m_Name;//选手姓名
	int m_Score;//平均分
};

void setScore(vector<Person>& v)
{
	for (auto it = v.begin(); it!= v.end();it++)
	{
		deque<int> d;
		//打分
		for (int i = 0 ; i < 10 ; i++)
		{
			int score = rand() % 40 + 60;//60~100
			d.push_back(score);
		}

		//排序
		sort(d.begin(), d.end());


		//测试打分
// 		cout << "姓名为：" << it->m_Name << endl;
// 		cout << "打分：" << " ";
// 		for (auto it1 = d.begin(); it1 != d.end(); it1++)
// 		{
// 			cout << *it1 << " ";
// 		}
// 		cout << endl;

		//去掉最高分和最低分
		d.pop_back();
		d.pop_front();

		//取平均分
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
		string name = "选手";
		name += personSeed[i];
		int score = 0;//默认0分
		Person p(name, score);
		v.push_back(p);
	}
}

void showScore(vector<Person> &v)
{
	for (auto it = v.begin() ; it != v.end() ; it++)
	{
		cout << "姓名为：" << it->m_Name << "分数为：" << it->m_Score << endl;
	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));


	//创建五名选手
	vector<Person> v;
	createPerson(v);
	//测试输出
// 	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
// 	{
// 		cout << "姓名：" << it->m_Name << "  分数" << it->m_Score << endl;
//  	}

	//评委打分
	setScore(v);

	//显示得分
	showScore(v);
	system("pause");
}