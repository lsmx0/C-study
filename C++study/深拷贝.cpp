#include <iostream>
using namespace std;
class Person
{
public:
	int _Age;
	int* _Height;
	Person()//�޲ι��캯��
	{
		cout << "�޲ι��캯������" << endl;
	}
	Person(int a, int Height)//�вι��캯��
	{
		_Age = a;
		_Height = new int(Height);
		cout << "�вι��캯������" << endl;
	}
	Person(const Person& P)//�������캯��//����������ڶ������٣�һ���Լ��ṩ�������캯��������ǳ�����������ͷ��ڴ������
	{
		cout << "���������ĵ���" << endl;
		_Age = P._Age;
		//_Height=P._Height �������Ŀ���Ĭ��Ϊ�˲������ᵼ�����������е��ͷ��ڴ���ִ���
		//����ʹ��������
		_Height = new int(*P._Height);
	}
	~Person()//��������
	{
		if (_Height != NULL)
		{
			delete _Height;
			_Height = NULL;
		}
		cout << "������������" << endl;
	}

};
void test()
{
	Person P(20, 160);
	cout << "P������Ϊ��" << P._Age << "P�����Ϊ��" << *P._Height << endl;
	Person P1(P);
	cout << "P1������Ϊ��" << P1._Age << "P1�����Ϊ��" << *P1._Height << endl;
}
int main()
{
	test();
}