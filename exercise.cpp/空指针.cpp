#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
/*void����ָ����ص�
1.��ָ���κ����ͣ�������һ����ַ
2.���ܽ���ָ�����㣬Ҳ���ܽ��м������
3.��������ָ����Ը�ֵ��������ָ��
4.������ָ�뾭��ʾת������ܸ�ֵ������ָ��
*/
//-----------
/*
��ָ������ڲ�֪��ָ�����͵�����½�������
*/
void swap(void* p, void* q, size_t num) {//����ͬ�������ݵ�ת��
	size_t i = 0;
	for (i = 0; i < num; i++) {
		char sum = *((char*)p + i);
		*((char*)p + i) = *((char*)q + i);
		*((char*)q + i) = sum;
	}
}
int main() {
	int a = 26579;
	int b = 10;
	swap(&a, &b, sizeof(a));//������������
	cout << "a=" << a << "\n";
	cout << "b=" << b << "\n";
//-----------------
	char c = 'a';
	char d = 'b';
	swap(&c, &d, sizeof(c));//�����������ַ�
	cout << "c=" << c << "\n";
	cout << "d=" << d << "\n";
}