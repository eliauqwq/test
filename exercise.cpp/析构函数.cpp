#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//���������ڶ����������ڽ���֮����Զ����ã��������ͷ���������ڴ�ռ�

class String {
public:
	String(const char* str = "jack") {
		_str = new char[10];
		strcpy(_str, str);
	}
	
	~String() {//��������������ǰ�Ӳ��˺�
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
