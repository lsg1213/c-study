#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define N 10

class MyClass {
public:
	long long unsigned int GetOffsetFrom(MyClass* myClass) {
		/**
		 *  ������ ��ü�� �ٸ� ��ü�� �ε��� ����(offset)��
		 *  �����ϴ� �Լ�
		 *
		 */
		MyClass *a = myClass;
		MyClass *b = this;
		long long unsigned int n = abs(a - b)/sizeof(MyClass);

		return n;
	}
};

class MyArray {
private:
	int arrSize;
public:
	MyClass* arr;

	/**
	 * �Ʒ��� �ڵ带 �����Ͽ� private �ʵ��� arrSize�� ����
	 * �Ű����� ������ �ʱ�ȭ ��Ű����.
	**/
	MyArray(int n) {
		arr = new MyClass[n];
		arrSize = n;
		srand(time(NULL));
	}

	// ������ �ڵ�� �������� ������
	~MyArray() {
		delete[] arr;
	}
	MyClass* GetElementRadomlyOnRange(int& index) {
		int num = rand() % arrSize;
		index = num;
		return arr + num;
	}
};


int main() {
	MyArray myArray(N);

	// ����Ȯ���� ���� ����
	int rand1, rand2;

	// ������ �� ��ü�� �̴´�.
	MyClass* m1 = myArray.GetElementRadomlyOnRange(rand1);
	MyClass* m2 = myArray.GetElementRadomlyOnRange(rand2);

	// �� ��ü ������ index ����(offset)�� ���
	cout << "����: " << abs(rand1 - rand2) << endl;
	cout << "����� ��: " << (*m1).GetOffsetFrom(m2) << endl;

	return 0;
}