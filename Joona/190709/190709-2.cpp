//MyClass�� �ϼ��Ͽ� ������, �Ҹ����� ȣ���� Ȯ�νñ⸦ Ȯ���ϰ� PrintThis�Լ��� a�� �ּҸ� ����Ѵ�.

#include <iostream>

using namespace std;

class MyClass {
public:

	MyClass() {
		cout << "�����Ǿ����ϴ�" << endl;
	}

	~MyClass() {
		cout << "�Ҹ�Ǿ����ϴ�" << endl;
	}

	void PrintThis() {
		cout << "�ּ�: "<< this << endl;
	}

};

int main() {
	MyClass a, b;

	a.PrintThis();

	return 0;
}