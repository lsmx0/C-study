#include <iostream>
using namespace std;
//��̬��Ա��������java����
class Person
{
public:
	//���ж��󶼹���ͬһ������
	//����׶ξͷ����ڴ�
	//���������������ʼ������
	static int _A;
	//��̬��Ա�����з���Ȩ��
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
	//��̬��Ա���������ַ��ʷ�ʽ����Javaһ��
	cout << Person::_A << endl;
	//cout << Person::_B << endl;�����޷�����˽�еľ�̬��Ա����
}
int main()
{

	test();
	test_0();
	system("pause");
	return 0;
}