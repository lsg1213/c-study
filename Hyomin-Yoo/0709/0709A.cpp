#include <iostream>

using namespace std;

class MyClass{
	MyClass(){
		cout << "������ ȣ��"<<endl;
	}
	~MyClass(){
		cout <<"�Ҹ��� ȣ��"<<endl;
	}
	void PrintThis(){
		cout << this << endl;
	}
};

int main(){
	MyClass a;

	a.PrintThis();

	return 0;
}