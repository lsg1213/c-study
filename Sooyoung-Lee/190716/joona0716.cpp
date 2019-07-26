#include <iostream>
using namespace std;
/* 1. const ���ϼ� �ִ� ���� �� �ٿ����� */
class Op {
public:
	/* 2. �������� ����� ���� �и��ϱ�(�ؿ� ����� ������ ��� ������ ����) */
	Op();
	Op(const int a,const int b,const int c);

	float getA();
	float getB();
	float getC();

	/* 3. ����, ������ a����, b����, c���� ����.
	����, �������� a, b, c�� �Էµ� ���ڰ� ���� ����.
	��� �޼����� ����, ���� �и��ؼ� Ŭ���� �ۿ��� �����ϱ�*/
	Op operator+(Op);
	Op operator-(Op);
	Op operator*(float);
	Op operator/(float);


	const static Op Sum(const Op x,const Op y) {
		return Op(x.a + y.a, x.b + y.b, x.c + y.c);
	}


private:
	int a;
	int b;
	int c;
};

Op::Op() :a(0), b(0), c(0) { };
Op::Op(const int a, const int b, const int c) : a(a), b(b), c(c) { };

float Op::getA() { return a; }
float Op::getB() { return b; }
float Op::getC() { return c; }

Op Op::operator+(Op x) {
	return Op(a + x.a, b + x.b, c + x.c);
}
Op Op::operator-(Op x) {
	return Op(a - x.a, b - x.b, c - x.c);
}
Op Op::operator*(float x) {
	return Op(a * x, b * x, c * x);
}
Op Op::operator/(float x) {
	return Op(a / x, b / x, c / x);
}

int main() {
	Op x(3, 6, 9), y(2, 4, 6);
	Op z1 = x + y;
	Op z2 = x - y;
	Op z3 = x * 5;
	Op z4 = y / 2;
	/* 4. ���� �޼��� ����Ͽ� z1�� ������ ����������� Ȯ��*/
	Op z5 = Op::Sum(x,y);

	cout << z1.getA() << ", " << z1.getB() << ", " << z1.getC() << endl;
	cout << z2.getA() << ", " << z2.getB() << ", " << z2.getC() << endl;
	cout << z3.getA() << ", " << z3.getB() << ", " << z3.getC() << endl;
	cout << z4.getA() << ", " << z4.getB() << ", " << z4.getC() << endl;
	cout << z5.getA() << ", " << z5.getB() << ", " << z5.getC() << endl;

	return 0;
}