#include <iostream>
using namespace std;

class Plus {
	int a, b, sum;

public:
	//������ ä���
	Plus() :  { cout << "�����Ǿ����ϴ�" << endl; }

	Plus(int _a) :  {  }

	Plus(int _a, int _b) :  {  }

	//�Ҹ��ڿ��� sum ��µǰ� �ϱ�
	~Plus() {
		cout << "�Ҹ�Ǿ����ϴ�" << endl; }
};


int main() {
	int x, y;
	cin >> x >> y;

	//���� ǥ�� �����غ���
	Plus p(x, y);

	
	return 0;
}