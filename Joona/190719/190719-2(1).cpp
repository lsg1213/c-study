// copy constructor problem
// �Ʒ��� ������ ���� ���� �����ڰ� ������ ���� �� �� �ִ�.
//  TestFunc�� ���� ���� ���ε�,  �̴� ��ġ �ʴ� ����̴�. 
// ���� �����ڰ� ������ ���� �ʵ��� ���ĺ���.

#include<iostream>

using namespace std;


class Userdata {
private:
	int nAge;
	string szName;

public:
	Userdata() : nAge(0), szName("") {
		cout << "Userdata() " << endl;
	}

	Userdata(int nAge, string szName) : nAge(nAge), szName(szName) {
		cout << "Userdata(int,string) " << endl;
	}

	Userdata(const Userdata& rhs) : nAge(rhs.nAge), szName(rhs.szName) {
		cout << "Userdata(const Userdata &rhs) " << endl;
	}

	void Setdata_nAge(int nParam) {
		nAge = nParam;
	}

	static void Printdata(const Userdata* a) {
		cout << a->nAge << " " << a->szName << endl;
	}
};

void TestFunc(Userdata& Param) {
	cout << "TestFunc() " << endl;
	Param.Setdata_nAge(26);
}

int main() {
	cout << "begin - main" << endl;
	Userdata a(10, "yeop");
	TestFunc(a);

	cout << "end - main" << endl;
}

