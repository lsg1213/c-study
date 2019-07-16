//	3���� �л��� ������ ����� ���� ���� ����� Ŭ���� �ȿ� �ۼ��Ѵ�.
#include <iostream>
using namespace std;


class Score {
private:
	int Eng;
	static int Sum;
	static int Count;

public:
	Score() : Eng(0) { Sum += Eng; Count++; }
	Score(int Eng) : Eng(Eng) { Sum += Eng; Count++; }
	static double Average() {
		return (double)Sum / Count;
	}
};

int Score::Sum = 0;
int Score::Count = 0;

int main() {

	Score a(30);
	Score b(78);
	Score c(49);


	cout << "��� : " << Score::Average() << endl;
}