#include <iostream>
#include <string>
using namespace std;
// 1. class�� �Լ���� �����ڸ� ���� ���� �ؾ��ϴ� �� ���� �۾��� �ִ�. �ش� �۾��� �Ͻÿ�.
class TV {
	string company;
	bool power;
	int channel;
	int volume;


public:
	TV(string _company) {
		company = _company;
		power = false;
	}
	void showCompany() {
		cout << "TV is made by " << company << endl;
	}
	void showPower() {
		string _power;
		if (power) _power = "on";
		else _power = "off";
		cout << "TV is " << _power << " now" << endl;
	}
	void showVolume() {
		cout << "Volume is " << volume << " now" << endl;
	}
	void showChannel() {
		cout << "Channel is " << channel << " now" << endl;
	}

	// 2.�Ŀ� on/off ������ �� �ִ� �Լ��� ����ÿ�(�Է� _power; on/off)
	void setPower(string _power) {
		if (_power == "on") {
			power = true;
		}
		else {
			power = false;
		}
	}

	// 3.���� ������ �� �� �ִ� �Լ��� ����ÿ�(0~100�� �ƴ� ��쿡�� false, 0~100�� ��� true return)
	bool setVolume(int _volume) {
		if (_volume < 0 || _volume > 100) return false;
		volume = _volume;
		return true;
	}

	// 4.ä���� ������ �� �ִ� �Լ��� ����ÿ�(0~1000�� �ƴ� ��쿡�� ����x, �۾��� ���������� ������ ��� true return �ƴϸ� false return)
	bool setChannel(int _channel) {
		if (_channel < 0 || _channel > 1000) return false;
		channel = _channel;
		return true;
	}
};

int main() {
	string tvcompany;
	cout << "tv�� ��� ȸ�� ��ǰ�ΰ���?" << endl;
	cin >> tvcompany;
	TV tv(tvcompany);
	while (true) {
		string _power;
		cout << "tv�� ������ ��� �Ͻðڽ��ϱ�? (on/off)" << endl;
		while (true) {
			cin >> _power;
			if (_power == "on" || _power == "off") break;
			cout << "����� ���� ���� �Է��Դϴ�. �ٽ� �Է����ּ���(on/off)." << endl;
		}
		tv.setPower(_power);

		cout << "Volume ũ�⸦ �����Ͻÿ�(0~100)" << endl;
		int _volume;
		cin >> _volume;
		if (cin.fail()) {
			_volume = -1;
		}
		while (!tv.setVolume(_volume)) {
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Volume ũ�⸦ 0~100 ���̷� �����ϼ���." << endl;
			cout << "Volmume(0~100): ";
			cin >> _volume;
			if (cin.fail()) {
				_volume = -1;
			}
		}

		cout << "Channel�� �����Ͻÿ�(0~1000)" << endl;
		int _channel;
		cin >> _channel;
		if (cin.fail()) {
			_channel = -1;
		}
		while (!tv.setChannel(_channel)) {
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Channel�� 0~1000 ���̷� �����ϼ���." << endl;
			cout << "Channel(0~1000): ";
			cin >> _channel;
			if (cin.fail()) {
				_channel = -1;
			}
		}

		cout << "---------------------------------------------------------------------------------" << endl;
		cout << "���� tv ���´� ������ �����ϴ�." << endl;
		tv.showCompany();
		tv.showPower();
		tv.showVolume();
		tv.showChannel();
		string status;
		cout << "�����Ϸ��� exit, ��� �Ϸ��� �ƹ��ų� �Է��ϼ���" << endl;
		cin >> status;
		if (status == "exit") break;
	}
	return 0;
}