#include <iostream>
using namespace std;

class Robot {
	bool power = false;
	int upDown = 0, leftRight = 0;
	int limit = 5;

public:
	void setPower(bool p) {
		power = p;
		if (power == true) {
			cout << "������ �������ϴ�." << endl;
		}
		else {
			cout << "������ �������ϴ�." << endl;
		}
	}

	bool getPower() {
		return power;
	}


	void moveUp(int up) {
		if (upDown + up <= 10) {
			upDown += up;
			limit--;
			if (limit == 0) {
				setPower(false);
			}
		}
		else {
			cout << "������ �� �ִ� ������ �Ѿ���ϴ�." << endl;
		}

	}

	void moveDown(int down) {
		if (upDown - down >= 0) {
			upDown -= down;
			limit--;
			if (limit == 0) {
				setPower(false);
			}
		}
		else {
			cout << "������ �� �ִ� ������ �Ѿ���ϴ�." << endl;
		}

	}

	void moveLeft(int left) {
		if (leftRight - left >= 0) {
			leftRight -= left;
			limit--;
			if (limit == 0) {
				setPower(false);
			}
		}
		else {
			cout << "������ �� �ִ� ������ �Ѿ���ϴ�." << endl;
		}
	}

	void moveRight(int right) {
		if (leftRight + right >= 0) {
			leftRight += right;
			limit--;
			if (limit == 0) {
				setPower(false);
			}
		}
		else {
			cout << "������ �� �ִ� ������ �Ѿ���ϴ�." << endl;
		}
	}

	void printLocation() {
		cout << "���� ��ġ�� (" << upDown << ", " << leftRight << ") �Դϴ�." << endl;
	}

};


int main() {
	int move, num;
	Robot robot;
	robot.setPower(true);
	robot.printLocation();

	while (robot.getPower()) {
		cout << "�κ��� �����̴� ������ �����Ͻÿ� (1.up / 2.down / 3. left / 4.right): ";
		cin >> move;
		cout << "�κ��� �󸶸�ŭ �������� �Է��Ͻÿ�: ";
		cin >> num;
		if (num < 0) {
			cout << "�߸��Է��ϼ̽��ϴ�" << endl;
			continue;
		}

		switch (move) {
		case 1:
			robot.moveUp(num);
			robot.printLocation();
			break;
		case 2:
			robot.moveDown(num);
			robot.printLocation();
			break;
		case 3:
			robot.moveLeft(num);
			robot.printLocation();
			break;
		case 4:
			robot.moveRight(num);
			robot.printLocation();
			break;
		default:
			cout << "�߸��Է��ϼ̽��ϴ�" << endl;
		}

		cout << endl;
	}
}