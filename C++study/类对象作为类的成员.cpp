#include <iostream>
#include<string>
using namespace std;
//类对象作为类成员

class Phone
{
public:
	Phone(string PName)
	{
		P_Name = PName;
		cout << "手机 " << endl;
	}
	~Phone()
	{
		cout << "析构手机" << endl;
	}
	string P_Name;
};
class Person
{
public:

	Person(string name, string pName) :_Name(name), _Phone(pName)
	{
		cout << "人" << endl;
	}
	~Person()
	{
		cout << "析构人" << endl;
	}
	//姓名
	string _Name;
	//手机
	Phone _Phone;
};

//当其他类对象作为本类成员，构造时候先构造类 对象，再构造自身
void test01()
{
	Person P("张三", "华为");
	cout << P._Name << "拿着" << P._Phone.P_Name << "手机" << endl;
}
int main()
{

	test01();
	system("pause");
	return 0;
}