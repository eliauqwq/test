#define _CRT_SECURE_NO_WARNINGS
//c-串操作
#include <iostream>
using namespace std;
int main()
{
	char *s1 = (char*)"Hello ";//由于不能用const char*给char*直接赋值，这里选择强制类型转换
	char* s2 = (char*)"123";
	char a[20];
	strcpy(a, s1);//复制操作
	cout << (strcmp(a, s1) == 0 ? "" : "not ") << endl;//比较
	cout << strcat(a, s2)<< endl;//链接
	cout << _strrev(a) << endl;//倒置
	cout << _strset(a, 'c') << endl;//设置
	cout << (strstr(s1, "ell") ? "" : "not ") <<"found" << endl;//查找串
	cout << (strchr(s1, 'c') ? "" : "not ") << "found" << endl;//查找字符
}