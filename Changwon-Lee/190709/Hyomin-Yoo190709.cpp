//MyClass�� �ϼ��Ͽ� ������, �Ҹ����� ȣ���� Ȯ�νñ⸦ Ȯ���ϰ� PrintThis�Լ��� a�� �ּҸ� ����Ѵ�. 

#include <iostream>

using namespace std;

class MyClass{
public :
	
	MyClass(){
		cout << "craete" << endl;
	}
	
	~MyClass(){
		cout << "delete" << endl;
	}
	
	void PrintThis(){
		cout << this << endl;
	}
};

int main(){
	MyClass a,b;

	a.PrintThis();
	
	return 0;
}
