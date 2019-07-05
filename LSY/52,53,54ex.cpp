/*
	���簢���� �����ϴ� Ŭ������ �����ϰ�,
	Ŭ������ ����� ���簢���� ������ �����ϴ� �Լ��� �����ض�
	(���簢���� ���̿� ���̴� ���� 0 �̻� 100 ���Ϸ� ����)

	�����Լ��� Ŭ������ ����� �̿��Ͽ� ���簢���� ������ ����� ��

*/

#include <iostream>

using namespace std;

class Rectangle {
	int width = 0;
	int height = 0;

public: 
	void setWidth(int width_) {
		if(width_ >=0 && width <=100)
			width = width_;
	}
	void setHeight(int height_) {
		if(height_ >=0 && height <=100)
			height = height_;
	}

	int getArea() {
		return width * height;
	}
};

int main() {
	Rectangle A;
	int w, h;
	cout << "���簢���� ���� (0 �̻� 100 ����) : ";
	cin >> w;
	cout << "���簢���� ���� (0 �̻� 100 ����) : ";
	cin >> h;

	A.setWidth(w);
	A.setHeight(h);
	
	cout << "���簢���� ���� : " << A.getArea() << endl;
}