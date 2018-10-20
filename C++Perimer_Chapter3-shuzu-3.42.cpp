//C++ Primer  练习 3.42

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	const int sz = 10;
	vector<int> vInt;
	srand((unsigned)time(NULL));
	cout << "vector对象的内容是：" << endl;
	for (int i = 0; i < sz; i++)
	{
		vInt.push_back(rand() % 100);
		cout << vInt[i] << " ";
	}
	cout << endl;
	
	
	auto it = vInt.cbegin();
	int a[sz];//课本是以vInt.size()代替sz，但编译未成功
	cout << "数组的内容是：" << endl;
	for (auto &val : a)//数组可以看成指针
	{
		val = *it;
		cout << val << " ";
		it++;
	}
	cout << endl;
	return 0;
}