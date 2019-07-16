#include <iostream>
using namespace std;
/* 1. const ���ϼ� �ִ� ���� �� �ٿ����� */
class Op {
public:
	/* 2. �������� ����� ���� �и��ϱ�(�ؿ� ����� ������ ��� ������ ����) */
	Op();
	Op(int a, int b, int c);


	float getA() const;
	float getB() const;
	float getC() const;

	/* 3. ����, ������ a����, b����, c���� ����.
	����, �������� a, b, c�� �Էµ� ���ڰ� ���� ����.
	��� �޼����� ����, ���� �и��ؼ� Ŭ���� �ۿ��� �����ϱ�*/
	Op operator+(Op);
	Op operator-(Op);
	Op operator*(float);
	Op operator/(float);


	static Op Sum(Op x, Op y) {
		return Op(x.a + y.a, x.b + y.b, x.c + y.c);
	}


private:
	int a;
	int b;
	int c;
};
Op::Op() : a(0), b(0), c(0) { }
Op::Op(int a,int b,int c) : a(a), b(b), c(c) { }
Op Op::operator+(Op k) {
	return Op(a + k.a, b + k.b, c + k.c);
}
Op Op::operator-(Op k) {
	return Op(a - k.a, b - k.b, c - k.c);
}
Op Op::operator*(float k) {
	return Op(a * k, b * k, c * k);
}
Op Op::operator/(float k) {
	return Op(a / k, b / k, c / k);
}


float Op::getA() const{ return a; }
float Op::getB() const{ return b; }
float Op::getC() const{ return c; }

int main() {
	Op x(3,6,9), y(2,4,6);
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