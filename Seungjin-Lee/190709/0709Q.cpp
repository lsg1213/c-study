//MyClass�� �ϼ��Ͽ� ������, �Ҹ����� ȣ���� Ȯ�νñ⸦ Ȯ���ϰ� PrintThis�Լ��� a�� �ּҸ� ����Ѵ�. 

#include <iostream>

using namespace std;

class MyClass{
	public:
	MyClass() {
		cout << "ȣ��!" << endl;
	}
	~MyClass() {
		cout << "�Ҹ�!" << endl;
	}
	void PrintThis(){
		cout << this << endl;
	}
};

int main(){
	MyClass a;

	a.PrintThis();
	return 0;
}