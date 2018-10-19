//C++ Primer习题集  练习3.39


//对比两个vector对象是否相等
/*#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//比较两个string对象的大小
int main()
{
	string str1, str2;
	cout << "输入两个字符串：" << endl;
	cin >> str1 >> str2;

	if (str1 > str2)
		cout << "第一个字符串大于第二个字符串" << endl;
	else if (str1 < str2)
		cout << "第一个字符串小于第二个字符串" << endl;
	else
		cout << "两个字符串相等" << endl;
	return 0;
}*/

//比较两个C风格字符串的大小
#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str1[80], str2[20];
	cout << "请输入两个字符串：" << endl;
	cin >> str1 >> str2;
	auto result = strcmp(str1, str2);//利用cstring头文件中定义的strcmp函数比较大小
	switch (result)
	{
		case 1:
			cout << "第一个字符串大于第二个字符串" << endl;
			break;
		case -1:
			cout << "第一个字符串小于第二个字符串" << endl;
			break;
		case 0:
			cout << "两个字符串相等" << endl;
			break;
		default:
			cout << "未定义的结果" << endl;
			break;
	}
	return 0;
}