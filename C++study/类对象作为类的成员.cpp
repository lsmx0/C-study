#include <iostream>
#include<string>
using namespace std;
//�������Ϊ���Ա

class Phone
{
public:
	Phone(string PName)
	{
		P_Name = PName;
		cout << "�ֻ� " << endl;
	}
	~Phone()
	{
		cout << "�����ֻ�" << endl;
	}
	string P_Name;
};
class Person
{
public:

	Person(string name, string pName) :_Name(name), _Phone(pName)
	{
		cout << "��" << endl;
	}
	~Person()
	{
		cout << "������" << endl;
	}
	//����
	string _Name;
	//�ֻ�
	Phone _Phone;
};

//�������������Ϊ�����Ա������ʱ���ȹ����� �����ٹ�������
void test01()
{
	Person P("����", "��Ϊ");
	cout << P._Name << "����" << P._Phone.P_Name << "�ֻ�" << endl;
}
int main()
{

	test01();
	system("pause");
	return 0;
}