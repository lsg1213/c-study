#include <iostream>
using namespace std;

class Plus {
	int a, b, sum;

public:
	//1. ������ ä��� (������ ������ �̿�)
	Plus() : a(0), b(0), sum(a+b) { cout << "�����Ǿ����ϴ�" << endl; }

	Plus(int _a) : Plus() {
		a = _a;
	}

	Plus(int _a, int _b) : Plus(_a) {
		b = _b;
		sum = a + b;
	}

	//2. �Ҹ��ڿ��� sum ����ϰ� "�Ҹ�Ǿ����ϴ�" ���
	~Plus() {
		cout << "sum : " << sum << endl;
		cout << "�Ҹ�Ǿ����ϴ�." << endl;
	}

};


int main() {
	int x, y;
	cin >> x >> y;

	//3. ���� ǥ�� �����غ���
	Plus p(x, y);

	return 0;
}