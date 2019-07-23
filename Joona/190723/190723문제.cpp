#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Student {
public:
	Student() : id(0), name(NULL) {
		cout << "Student() ������" << endl;
	}

	Student(int _id, const char* _name) {
		cout << "Student(int, char*) ������" << endl;
		id = _id;
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);
	}

	/*1. ��������� �����ε� �����
	���� ���簡 �ƴ϶� ���� ���簡 �� �� �ֵ���*/
	Student(Student& rhs) {
		cout << "Student(Student&) ���������" << endl;
		//code
	}

	/*2. ���� ������ �����ε� �����
	c.operator=(c) ó�� �ڱ��ڽ��� ������ �� �������� �۵��ϵ��� if���� �̿�*/
	Student& operator=(const Student& rhs) {
		//code
	}

	~Student() {
		cout << "~Student() �Ҹ���" << endl;
		delete[] name;
		name = NULL;
	}

	int getID() {
		return id;
	}

	char* getName() {
		return name;
	}

private:
	int id;
	char* name;
};

int main() {
	Student a(123456, "abc");
	Student b(a);
	Student c;
	c = a;
	c.operator=(c);

	cout << "a: (" << a.getID() << ", " << a.getName() << ")" << endl;
	cout << "b: (" << b.getID() << ", " << b.getName() << ")" << endl;
	cout << "c: (" << c.getID() << ", " << c.getName() << ")" << endl;

	return 0;
}