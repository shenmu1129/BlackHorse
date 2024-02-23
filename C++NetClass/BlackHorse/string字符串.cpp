#include<iostream>
#include<string>
using namespace std;



void test01()
{
	string a1;//默认构造

	const  char* c1 = "asdasd";
	string str(c1);
	cout << str << endl;

	//拷贝构造
	string str2(str);
	cout << str2 << endl;

	string str3(10, 'd');
	cout << str3 << endl;

	string str4;
	str4.assign("asddddd");

	string str5;
	str5.assign("hello c++", 5);//将字符串的前五个赋值，也就是子串
		
	string str6;
	str6.assign(10, 'a' );

	string str7 = "我爱玩游戏:";
	string str8 = "LOL";
	//str7 += str8;
	//str7.append(str8);

	//str7.append("dnf lol", 3);//截取前三个字符加入到str7当中
	str7.append("dnf lol", 4, 3);//从第n个字符开始截，截m个字符，很实用


	
	cout << str7 << endl;
}

int main()
{
	test01();
}