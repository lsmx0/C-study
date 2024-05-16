#include <iostream>
#include <string>
using namespace std;

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量
class Person
{
public:
	//静态成员函数
	static void func()
	{
		_A = 100;
		//_B = 100;静态成员函数不能访问非静态成员变量
		cout << "static void func的调用" << endl;
	}
	//静态成员变量
	static int _A;
	//非静态的成员变量
	int _B;
};
int Person::_A = 0;
//有两种访问方式
void test01()
{
	//通过对象访问
	Person P;
	P.func();
	//通过类名访问
	Person::func();
}



int main()
{
	test01();
	system("pause");
	return 0;
}