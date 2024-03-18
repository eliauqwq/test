#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//析构函数在对象生命周期结束之后会自动调用，可用来释放已申请的内存空间

class String {
public:
	String(const char* str = "jack") {
		_str = new char[10];
		strcpy(_str, str);
	}
	
	~String() {//析构函数在类名前加波浪号
		cout << "~String()" << endl;
		delete _str;
	}
	void printf()
	{
		cout << _str << endl;
	}
private:
	char* _str;
};


int main()
{
	String a;
	a.printf();
	return 0;
}
