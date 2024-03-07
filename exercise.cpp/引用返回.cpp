#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//要想函数返回值作为左值，必须使用引用返回
int s;
int&sum(int a, int b) { 
	s = a + b;
	return s;//不能返回一个局部变量的引用 
}
int main() {
	sum(2, 3);
	 

}
