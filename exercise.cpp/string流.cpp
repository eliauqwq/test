#define _CRT_SECURE_NO_WARNINGS
//string��
#include <iostream>
#include<string>
using namespace std;
int main()
{
//cin.getline(char *s,streamsize n,char delim)
/*1.��������ʱgetline��cin���е�һ��������
2.����s���ַ���������n������ĳ��ȼ��ַ�������delim����ֹ�ַ���������ʱĬ��ʱ'\0'
3.����������Ϊchar*ʱ������ʹ��cin��getline*/
	char a[20] = "Hello";
	cin.getline(a, 6);//��Ҫ���β��ֹ����5+1=6
	cout << a << endl;
//=========================
//getline(istream& is,string& str,char delim)
/*
1.is�Ǳ�׼������������str�Ǵ��ַ��ı�������delim�ǽ����ַ�
2.����������Ϊstringʱ������ʹ��getline����
3.�ú���Ҫ��<string>ͷ�ļ�
*/
	string b;
	getline(cin, b);
	cout << b << endl;

}