#include <iostream>
using namespace std;

class Plus {
	int a, b, sum;

public:
	//1. ������ ä���
	Plus() : a(0), b(0), sum(0) { cout << "�����Ǿ����ϴ�" << endl; }

	Plus(int _a) : Plus() { 
		a = _a;
	 }

	Plus(int _a, int _b) : Plus(_a) { 
		b = _b;
	 }

	//2. �Ҹ��ڿ��� sum ����ϰ� "�Ҹ�Ǿ����ϴ�" ���
	~Plus() {
		cout << sum << endl;
		cout << "�Ҹ�Ǿ����ϴ�" << endl;
	}

};


int main() {
	int x, y;
	cin >> x >> y;

	//3. ���� ǥ�� �����غ���
	Plus p1 = (x,y);
	Plus p2 = {x,y};
	Plus p3{x,y};
	Plus p4(x, y);

	
	return 0;
}