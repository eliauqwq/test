#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//用new和delete来申请m*n二维数组空间
int main() {
	int m, n;
	cin >> m >> n;
	int** arr;//定义一个指向指针的指针;二维数组是在一维指针数组上储存一个数组
	arr = new int* [m];//申请一维指针数组
	for (int i = 0; i < m; i++) {
		arr[i] = new int[n];//在一维指针数组基础上申请二维数组
	}
//至此已完成二维数组的申请和初始化
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = i + j;
			cout << arr[i][j];
		}
		cout << "\n";
	}
//进行数组打印，验证是否有误
	for (int i = 0; i < m; i++)
		delete[] arr[i];
	delete[] arr;
}