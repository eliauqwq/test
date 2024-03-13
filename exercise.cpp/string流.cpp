#define _CRT_SECURE_NO_WARNINGS
//string流
#include <iostream>
#include<string>
using namespace std;
int main()
{
//cin.getline(char *s,streamsize n,char delim)
/*1.可以理解此时getline是cin类中的一个函数名
2.其中s是字符串变量，n是输入的长度即字符个数，delim是终止字符，不定义时默认时'\0'
3.当变量类型为char*时，才能使用cin。getline*/
	char a[20] = "Hello";
	cin.getline(a, 6);//还要算结尾终止符，5+1=6
	cout << a << endl;
//=========================
//getline(istream& is,string& str,char delim)
/*
1.is是标准输入流函数，str是存字符的变量名，delim是结束字符
2.当变量类型为string时，才能使用getline（）
3.该函数要用<string>头文件
*/
	string b;
	getline(cin, b);
	cout << b << endl;

}