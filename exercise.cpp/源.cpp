#define _CRT_SECURE_NO_WARNINGS
//string流
//给定一个文件aaa.txt，包含若干行数据，分别计算各行数据之和并打印
#include <iostream>
#include<fstream>//包含之前所用的文件流
#include<sstream>//string流头文件
#include<string>
using namespace std;
int main()
{
	ifstream in("aaa.txt");//定义读取给定文件的文件流
	ofstream out("bbb.txt");//生成一个结果文件
	for (string s; getline(in,s);)
	{

		int  a;
		int sum = 0;
		for (istringstream sin(s); sin >> a; sum += a);
		out << sum << endl;
	}

}
