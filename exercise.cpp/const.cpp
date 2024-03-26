#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*
	在类中，某方法后面跟上const表示该方法不能更改类中的任何成员的值，除非该成员前有mutable
	进行修饰
*/
using namespace std;
class A
{
public:
	mutable int num;
	A()
		:num(0){}

	int change() const
	{
		num = 10;
		return 0;
	}
};

int main()
{
	A p1;
	p1.change();
	cout << p1.num << endl;
}