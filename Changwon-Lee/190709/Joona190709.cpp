#include <iostream>
using namespace std;

class Plus {
	int a, b, sum;

public:
	//1. ������ ä���
	Plus(){ cout << "�����Ǿ����ϴ�" << endl; }

	Plus(int _a) : a(_a) {  }

	Plus(int _a, int _b) : a(_a), b(_b) {  }

	//2. �Ҹ��ڿ��� sum ����ϰ� "�Ҹ�Ǿ����ϴ�" ���

	~Plus(){
		cout << "sum : " << a + b << endl;
	}
	

};


int main() {
	int x, y;
	cin >> x >> y;

	//3. ���� ǥ�� �����غ���
	Plus p(x, y);

	
	return 0;
}
