#include<iostream>
using namespace std;
int main() {
	cout << showpos << 13;
	cout << 12;
	//使输出的数字带有正号
	cout <<noshowpos<< 12;
	cout << 13<<"\n";
	//---------------------
	cout.width(5);
	//设置显示宽度,但为一次性操作，第二次显示时不再有效。
	cout.fill('s');
	//设置所要填充的字符
	cout << 23 << 23;


}