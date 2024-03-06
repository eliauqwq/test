#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
/*void类型指针的特点
1.不指向任何类型，仅仅是一个地址
2.不能进行指针运算，也不能进行间接引用
3.其他类型指针可以赋值给空类型指针
4.空类型指针经显示转换后才能赋值给其他指针
*/
//-----------
/*
空指针可以在不知道指针类型的情况下交换数据
*/
void swap(void* p, void* q, size_t num) {//两个同类型数据的转换
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
	swap(&a, &b, sizeof(a));//交换两个整形
	cout << "a=" << a << "\n";
	cout << "b=" << b << "\n";
//-----------------
	char c = 'a';
	char d = 'b';
	swap(&c, &d, sizeof(c));//交换两个单字符
	cout << "c=" << c << "\n";
	cout << "d=" << d << "\n";
}