//	2���� �л��� ������ ����� ���� ���� ����� Ŭ���� �ȿ� �ۼ��Ѵ�.
#include <iostream>
using namespace std;


class Score {
private:
	int Eng;

public:
	Score() : Eng(0) {}
	Score(int Eng) : Eng(Eng) {}
	static int aver(Score Eng1, Score Eng2) {
		return (Eng1.Eng+Eng2.Eng)/2;
	}
};

int main() {
	Score a(50), b(60);

	cout << "��� : " << a.aver(a,b) << endl;
}