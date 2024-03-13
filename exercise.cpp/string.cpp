#define _CRT_SECURE_NO_WARNINGS
//string的基础操作
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	string s1 = "Hello ";
	string a, s2 = "123";
	a = s1;//复制
	cout << (a == s1 ? "" : "not ") << "equal" << endl;
	cout << a + s2 << endl;
	reverse(a.begin(), a.end());
	cout << a << endl;
	cout << a.replace(0, 9, 9, 'c') << endl;
	cout << (s1.find("ello") != -1 ? "" : "not ") << "found" << endl;
	cout << (s1.find('w') != -1 ? "" : "not ") << "found" << endl;
}