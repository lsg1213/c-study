//	3���� �л��� ������ ����� ���� ���� ����� Ŭ���� �ȿ� �ۼ��Ѵ�.
#include <iostream>
using namespace std;

class Score {
private:
	int Eng;

public:
	Score() : Eng(0) {}
	Score(int Eng) : Eng(Eng) {}
	
	static int avr(Score a, Score b, Score c){
		return (a.Eng + b.Eng + c.Eng)/3;
	}
};


int main() {
	Score a(10), b(20), c(30);

	cout << "Average : " << Score::avr(a,b,c) << endl;
}
