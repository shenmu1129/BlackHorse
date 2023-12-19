#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <ctime>
using namespace std;
#define CEHUA 0
#define YANFA 1
#define CHANPIN 2


class Worker
{
public:
	Worker(string name, int salary)
	{
		m_name = name;
		m_salary = salary;
	}
	string m_name;
	int m_salary;
};

void createWorker(vector<Worker> &v)
{
	string nameSeed = "ABCDEFGHIJ";

	for (int i = 0 ; i < 10 ; i++)
	{
		string name = "职工";
		name += nameSeed[i];
		int salary = rand() % 10000 + 10000;//10000~19999

		Worker w(name, salary);

		v.push_back(w);
	}
}

void setGroup(vector<Worker> &v , multimap<int,Worker> &m)
{
	for (int i = 0 ; i < v.size() ; i++)
	{
		int group = rand() % 3;

		m.insert(make_pair(group,v[i]));
	}
}

void showGroup(multimap<int,Worker> &m)
{
	//寻找key值，也就是部门编号
	cout << "----------------------------------" << endl;
	cout << "-------策划部门：--------------" << endl;

	auto pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int i = 0;
	for (auto it = pos ; it != m.end()&&  i< count; it++,i++)
	{
		cout << "部门编号为" << it->first << " 员工姓名：" << it->second.m_name << " 员工工资：" << it->second.m_salary << endl;
	}


	cout << "----------------------------------" << endl;
	cout << "-------研发部门：--------------" << endl;

	 pos = m.find(YANFA);
	 count = m.count(YANFA);
	i = 0;
	for (auto it = pos; it != m.end() && i < count; it++, i++)
	{
		cout << "部门编号为" << it->first << " 员工姓名：" << it->second.m_name << " 员工工资：" << it->second.m_salary << endl;

	}

	cout << "----------------------------------" << endl;
	cout << "-------产品部门：--------------" << endl;

	 pos = m.find(CHANPIN);
	 count = m.count(CHANPIN);
	 i = 0;
	for (auto it = pos; it != m.end() && i < count; it++, i++)
	{
		cout << "部门编号为" << it->first << " 员工姓名：" << it->second.m_name << " 员工工资：" << it->second.m_salary << endl;
	}



}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	vector<Worker>vWorker;

	createWorker(vWorker);

	//创建分组
	multimap<int, Worker> m;

	setGroup(vWorker,m);

	showGroup(m);

	system("pause");
	return 1;
}