#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//Ҫ�뺯������ֵ��Ϊ��ֵ������ʹ�����÷���
int s;
int&sum(int a, int b) { 
	s = a + b;
	return s;//���ܷ���һ���ֲ����������� 
}
int main() {
	sum(2, 3);
	 

}
