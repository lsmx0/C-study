#include <iostream>
using namespace std;
class Person {
public:
	//��ͳ��ʼ������
	/*Person(int a, int b, int c)
	{
		_A = a;
		_B = b;
		_C = c;
	}*/
	//��ʼ���б��ʼ������
	Person(int a, int b, int c) :_A(a), _B(b), _C(c)
	{

	}
	int _A;
	int _B;
	int _C;
};
void test01()
{
	//Person P(10, 20, 30);
	Person P(5, 6, 7);
	cout << P._A << endl;
	cout << P._B << endl;
	cout << P._C << endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}