#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*
	�����У�ĳ�����������const��ʾ�÷������ܸ������е��κγ�Ա��ֵ�����Ǹó�Աǰ��mutable
	��������
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