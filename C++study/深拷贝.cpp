#include <iostream>
using namespace std;
class Person
{
public:
	int _Age;
	int* _Height;
	Person()//无参构造函数
	{
		cout << "无参构造函数调用" << endl;
	}
	Person(int a, int Height)//有参构造函数
	{
		_Age = a;
		_Height = new int(Height);
		cout << "有参构造函数调用" << endl;
	}
	Person(const Person& P)//拷贝构造函数//如果有属性在堆区开辟，一定自己提供拷贝构造函数，避免浅拷贝带来的释放内存的问题
	{
		cout << "拷贝函数的调用" << endl;
		_Age = P._Age;
		//_Height=P._Height 编译器的拷贝默认为此操作，会导致析构函数中的释放内存出现错误
		//以下使用深拷贝解决
		_Height = new int(*P._Height);
	}
	~Person()//析构函数
	{
		if (_Height != NULL)
		{
			delete _Height;
			_Height = NULL;
		}
		cout << "析构函数调用" << endl;
	}

};
void test()
{
	Person P(20, 160);
	cout << "P的年龄为：" << P._Age << "P的身高为：" << *P._Height << endl;
	Person P1(P);
	cout << "P1的年龄为：" << P1._Age << "P1的身高为：" << *P1._Height << endl;
}
int main()
{
	test();
}