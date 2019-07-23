// Deep copy�� Shallow copy�� ��°� ���� Ȯ���ϱ�
// Deep�� Shallow �� ���� ��츦 �ϼ��ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Member
{
public:
	int age;
	char* name;

public:
	Member(int _age, const char* _name) //Constructor
	{
		age = _age;
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);
	}
	/*
	Member(const Member& s) //Deep Copy
	{
		age = s.age;
		name = new char[strlen(s.name) + 1];
		strcpy(name, s.name);
	}*/
	
	Member(const Member& s) //Shallow Copy
	{
		/*
		age = s.age;
		name = s.name;*/
		//*this = s;
		//this = &s;
	}
	
	~Member() { delete name; }

	void printMember()
	{
		cout << "name: " << name << endl;
		cout << "age: " << age << endl;
	}
};

int main()
{
	Member Q(23, "Mr.ABc");
	Member W = Q;

	Q.age = 24;
	strcpy(Q.name, "Mr.QWc");

	Q.printMember();
	W.printMember();

	return 0;
}