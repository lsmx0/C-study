#include <iostream>
#include <string>
using namespace std;

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class Person
{
public:
	//��̬��Ա����
	static void func()
	{
		_A = 100;
		//_B = 100;��̬��Ա�������ܷ��ʷǾ�̬��Ա����
		cout << "static void func�ĵ���" << endl;
	}
	//��̬��Ա����
	static int _A;
	//�Ǿ�̬�ĳ�Ա����
	int _B;
};
int Person::_A = 0;
//�����ַ��ʷ�ʽ
void test01()
{
	//ͨ���������
	Person P;
	P.func();
	//ͨ����������
	Person::func();
}



int main()
{
	test01();
	system("pause");
	return 0;
}