#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//��new��delete������m*n��ά����ռ�
int main() {
	int m, n;
	cin >> m >> n;
	int** arr;//����һ��ָ��ָ���ָ��;��ά��������һάָ�������ϴ���һ������
	arr = new int* [m];//����һάָ������
	for (int i = 0; i < m; i++) {
		arr[i] = new int[n];//��һάָ����������������ά����
	}
//��������ɶ�ά���������ͳ�ʼ��
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = i + j;
			cout << arr[i][j];
		}
		cout << "\n";
	}
//���������ӡ����֤�Ƿ�����
	for (int i = 0; i < m; i++)
		delete[] arr[i];
	delete[] arr;
}