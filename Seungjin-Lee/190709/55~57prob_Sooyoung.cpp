/*
���� Ŭ������ ���ǿ��� ������ �����ε��� �̿����� �ʰ�,
�Ʒ��� �ڵ尡 ���������� ����ǵ��� �������� ���Ǹ� �����ϼ���.

��� ��� :	0 0
			3 0
			2 3
*/

#include <iostream>

using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;
public:
	SimpleClass(int n1 = 0, int n2 = 0) 
	{
		num1 = n1;
		num2 = n2;
	}

	void Show() const
	{
		cout << num1 << ' ' << num2 << endl;
	}

};


int main(void)
{
	SimpleClass sc1;
	sc1.Show();

	SimpleClass sc2(3);
	sc2.Show();

	SimpleClass sc3(2, 3);
	sc3.Show();

	return 0;
}