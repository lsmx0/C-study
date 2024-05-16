#include <iostream>
using namespace std;
//静态成员变量，与java相似
class Person
{
public:
	//所有对象都共享同一份数据
	//编译阶段就分配内存
	//类内声明，类外初始化操作
	static int _A;
	//静态成员变量有访问权限
private:
	static int _B;
};

int Person::_A = 100;
int Person::_B = 100;
void test()
{
	Person P;//100
	cout << P._A << endl;
	Person P1;
	P1._A = 200;
	cout << P1._A << endl;
}
void test_0()
{
	//静态成员变量，两种访问方式，和Java一样
	cout << Person::_A << endl;
	//cout << Person::_B << endl;类外无法访问私有的静态成员变量
}
int main()
{

	test();
	test_0();
	system("pause");
	return 0;
}