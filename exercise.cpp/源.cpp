#define _CRT_SECURE_NO_WARNINGS
//string��
//����һ���ļ�aaa.txt���������������ݣ��ֱ�����������֮�Ͳ���ӡ
#include <iostream>
#include<fstream>//����֮ǰ���õ��ļ���
#include<sstream>//string��ͷ�ļ�
#include<string>
using namespace std;
int main()
{
	ifstream in("aaa.txt");//�����ȡ�����ļ����ļ���
	ofstream out("bbb.txt");//����һ������ļ�
	for (string s; getline(in,s);)
	{

		int  a;
		int sum = 0;
		for (istringstream sin(s); sin >> a; sum += a);
		out << sum << endl;
	}

}
