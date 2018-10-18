//C++ Primer习题集  练习3.32
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//数组方式实现
/*int main()
{
	   const int sz = 10;
	   int a[sz], b[sz];
	   for (int i = 0; i < sz; i++)
			  a[i] = i;
	   for (int j = 0; j < sz; j++)
			  b[j] = a[j];
	   for (auto val : b)
			  cout << val << " ";
	   cout << endl;
	   return 0;
}*/
//vector实现
int main()
{
	const int sz1 = 10;
	vector<int> vInt, vInt1;
	for (int i = 0; i < sz1; i++)
		vInt.push_back(i);
	for (int j = 0; j < sz1; j++)
		vInt1.push_back(vInt[j]);
	for (auto val1 : vInt1)
		cout << val1 << " ";
	cout << endl;
	return 0;
}