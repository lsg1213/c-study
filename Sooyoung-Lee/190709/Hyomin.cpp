// MyClass�� �ϼ��Ͽ� ������, �Ҹ����� ȣ��ñ⸦ Ȯ���ϰ� PrintThis�Լ��� a�� �ּҸ� ����Ѵ�.

#include <iostream>

using namespace std;

class MyClass {
public :
	MyClass() {
		cout << "������ ȣ�� : " << this << endl;
	}
	~MyClass() {
		cout << "�Ҹ��� ȣ�� : " << this << endl;
	}
	void PrintThis() {
		cout <<"a�� �ּ� : " << this << endl;
	}
};

int main() {
	MyClass a, b;

	a.PrintThis();

	return 0;
}