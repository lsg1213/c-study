#include <iostream>
using namespace std;
class rect {
	int x, y;

public:
	void set() {
		
		while (true) {
			cout << "x���� �Է��Ͻÿ�(0~100)" << endl;
			cin >> x;
			if (x < 0 || x > 100) {
				cout << "�߸��Է��߽��ϴ�" << endl;
				continue;
			}
			if (cin.fail()) {
				cin.clear();
				cin.ignore(256, '\n');
				continue;
			}
			break;
		}
		while (true) {
			cout << "y���� �Է��Ͻÿ�(0~100)" << endl;
			cin >> y;
			if (y < 0 || y > 100) {
				cout << "�߸��Է��߽��ϴ�" << endl;
				continue;
			}
			if (cin.fail()) {
				cin.clear();
				cin.ignore(256, '\n');
				continue;
			}
			break;
		}
	}

	void printing() {
		cout << "���簢���� ���̴� " << x * y << "�Դϴ�." << endl;
	}


};

int main() {
	rect rect;
	rect.set();
	rect.printing();
}