#include<iostream>
#include<string>
using namespace std;



void test01()
{
	string a1;//Ĭ�Ϲ���

	const  char* c1 = "asdasd";
	string str(c1);
	cout << str << endl;

	//��������
	string str2(str);
	cout << str2 << endl;

	string str3(10, 'd');
	cout << str3 << endl;

	string str4;
	str4.assign("asddddd");

	string str5;
	str5.assign("hello c++", 5);//���ַ�����ǰ�����ֵ��Ҳ�����Ӵ�
		
	string str6;
	str6.assign(10, 'a' );

	string str7 = "�Ұ�����Ϸ:";
	string str8 = "LOL";
	//str7 += str8;
	//str7.append(str8);

	//str7.append("dnf lol", 3);//��ȡǰ�����ַ����뵽str7����
	str7.append("dnf lol", 4, 3);//�ӵ�n���ַ���ʼ�أ���m���ַ�����ʵ��


	
	cout << str7 << endl;
}

int main()
{
	test01();
}