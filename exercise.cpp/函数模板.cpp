#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*当我们要大量对不同类型的对象进行同一种操作时，复制粘贴十分麻烦，并且不利于后期的维护
因此为了达到可读高效易维护的目的，c++引入了函数模板关键字，方便我们创建用于不同对象的函数*/
template <typename T1,typename T2> //template<typename+模板名>
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
