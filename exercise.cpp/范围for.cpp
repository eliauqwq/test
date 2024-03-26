#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*
在c++11中，新引入了一种基于范围的for循环，基本语法为for(auto 变量名：数组）。
但是需注意，该数组的范围必须确定.
下面利用范围for写一个使数组内所有成员加一的程序
*/
int main()
{
	int arr[5] = { 1,2,3,4,5 };//定义并初始化一个数组
	for (auto& b : arr)
	{
		b++;
		cout << b << endl;
	}

}