//�ļ���
//�����Ƶ��ļ�����͸ó�����ͬһĿ¼
#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream in("a.txt");
	ofstream out("b.txt");
	for (int a; in >> a && a > 10 && a < 50;) {
		out << a << endl;
		continue;
	}
}