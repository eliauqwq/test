//文件流
//被复制的文件必须和该程序处于同一目录
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