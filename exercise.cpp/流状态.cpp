#include<iostream>
using namespace std;
int main() {
	cout << showpos << 13;
	cout << 12;
	//ʹ��������ִ�������
	cout <<noshowpos<< 12;
	cout << 13<<"\n";
	//---------------------
	cout.width(5);
	//������ʾ���,��Ϊһ���Բ������ڶ�����ʾʱ������Ч��
	cout.fill('s');
	//������Ҫ�����ַ�
	cout << 23 << 23;


}