//	�����Լ��� ���������� ����ǵ��� Ŭ������ ���Ǹ� �����ϼ���	
//	��°��
//	1
//	1
//
//	* ��, a�� ���� ���, b�� ������ ������� ������ ��


#include <iostream>

using namespace std;

class StaticTest {
private:
	int b;
public:
	
	static int a;
	
	StaticTest() {
		b = 1;
	}
	static int getA() {
		return a;
	}
	int getB() {
		return b;
	}
};

int StaticTest::a = 1;

int main() {
	cout << StaticTest::getA() <<endl;

	StaticTest test;
	
	cout << test.getB() << endl;
}


