#include <iostream>
using namespace std;

class Rectangle {
	int w, h;

public:
	void setWidth(int _w) {
			w = _w;
	}

	void setHeight(int _h) {
			h = _h;
	}

	void printSpace(){
		cout << "���簢���� ������ " << w * h << "�Դϴ�." << endl;
	}
};


int main() {
	bool check = false;
	int x, y;
	Rectangle r;
	
	while (!check) {
		cout << "width (0 �̻� 100 ����): ";
		cin >> x;
		cout << "height(0 �̻� 100 ����): ";
		cin >> y;

		if (x >= 0 && x <= 100 && y >= 0 && y <= 100)
			check = true;
		else
			cout << "�߸��Է��ϼ̽��ϴ�." << endl;
	}

	r.setWidth(x);
	r.setHeight(y);
	r.printSpace();

}