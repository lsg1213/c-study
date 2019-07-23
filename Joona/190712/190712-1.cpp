//	2���� �л��� ������ ����� ���� ���� ����� Ŭ���� �ȿ� �ۼ��Ѵ�.
#include <iostream>
using namespace std;


class Score {
private:
	int Eng;

public:
	Score() : Eng(0) {}
	Score(int Eng) : Eng(Eng) {}

	int getScore() {
		return Eng;
	}

	static Score scoreAvg(Score a, Score b) {

		return Score((a.Eng + b.Eng) / 2);
	}
};

int main() {
	Score a(100), b(80);
	Score avg = Score::scoreAvg(a, b);

	cout << "��� : " << avg.getScore();
}