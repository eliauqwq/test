#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*������Ҫ�����Բ�ͬ���͵Ķ������ͬһ�ֲ���ʱ������ճ��ʮ���鷳�����Ҳ����ں��ڵ�ά��
���Ϊ�˴ﵽ�ɶ���Ч��ά����Ŀ�ģ�c++�����˺���ģ��ؼ��֣��������Ǵ������ڲ�ͬ����ĺ���*/
template <typename T1,typename T2> //template<typename+ģ����>
T1 Add (T1& x, T2& y)
{
	return x + y;
}

int main()
{
	int a = 1;
	int  b = 1;
	cout<<Add <int>(a, b);
}
