#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*
��c++11�У���������һ�ֻ��ڷ�Χ��forѭ���������﷨Ϊfor(auto �����������飩��
������ע�⣬������ķ�Χ����ȷ��.
�������÷�Χforдһ��ʹ���������г�Ա��һ�ĳ���
*/
int main()
{
	int arr[5] = { 1,2,3,4,5 };//���岢��ʼ��һ������
	for (auto& b : arr)
	{
		b++;
		cout << b << endl;
	}

}