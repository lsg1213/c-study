#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstring>

//����ü�� Ŭ������ ũ�⸦ �����Ѵ�.
//����ü�� Ŭ�������� ���� ���縦 ���� �� ������ �Ϻ��ϰ� �����Ѵ�. 

//�������� ���ϴ� ���ڿ����� ��� �� ���̰� 3���� �����Ǹ�, �� �̿��� ���ڿ��� �Է°����� ���� �ʵ��� �Ѵ�.
//��,����ó���� �� �ʿ�� ����. 

//����ü�� Ŭ������ ���빰�� ���� �ڽ��� �������� ��Ÿ���� ������, �θ���� ������, ����, �����̴�.
//�̸� ������ ���� �־��� ����� ����ü�� Ŭ������ ũ�⸦ ���� ���Ͽ���. 

using namespace std;

class c_person {
private:
	char* blood;
	char* f_b;
	char* m_b;
	int age;
	float grade;

public:
	c_person() {//�Է°��� �ƹ��͵� �־����� �ʾ��� ����� �⺻���� ������.  
		blood = new char[3];
		f_b = new char[3];
		m_b = new char[3];
		age = 30;
		grade = 3.0;
		blood = "AA";
		f_b = "AA";
		m_b = "AA";
	}

	//�Է°��� �־����� ���� ������. 
	c_person(char* self, char* father, char* mother, int age, float grade) : age(age), grade(grade) {
		blood = new char[3];
		f_b = new char[3];
		m_b = new char[3];
		strcpy(blood, self);
		strcpy(f_b, father);
		strcpy(m_b, mother);
	}

	//�������� �Է°��� ���� class�� ��ü�� �־����� ���� ���, �����ڸ� �ۼ��϶�. 
	c_person(const c_person& person) {
		blood = new char[3];
		f_b = new char[3];
		m_b = new char[3];
		age = person.age;
		grade = person.grade;
		strcpy(blood, person.blood);
		strcpy(f_b, person.f_b);
		strcpy(m_b, person.m_b);
	}

	//show �Լ��� �����Ͽ� class�� �ϼ��϶�. 
	void show() {
		cout << "age : " << age << endl;
		cout << "grade : " << grade << endl;
		cout << "blood type : " << blood << endl;
		cout << "father's blood type : " << f_b << endl;
		cout << "mother's blood type : " << m_b << endl;
	}
};

struct s_person {//����ü�� �ּ�/�ִ��� ũ�⸦ ������ �������� �ϼ��غ��ƶ�.  
	char* blood;
	int age;
	char* f_blood;
	float grade;
	char* m_blood;
};


void copy(struct s_person &a, struct s_person &b) {//�ٸ� ����ü�� ���� �����ϴ� �Լ��� �ۼ��϶�. 
	delete[] a.blood;
	delete[] a.f_blood;
	delete[] a.m_blood;
	a.blood = new char[3];
	a.f_blood = new char[3];
	a.m_blood = new char[3];
	strcpy(a.blood, b.blood);
	strcpy(a.f_blood, b.f_blood);
	strcpy(a.m_blood, b.m_blood);
	a.age = b.age;
	a.grade = b.grade;
}


void show(struct s_person person) {
	cout << "age : " << person.age << endl;
	cout << "grade : " << person.grade << endl;
	cout << "blood type : " << person.blood << endl;
	cout << "father's blood type : " << person.f_blood << endl;
	cout << "mother's blood type : " << person.m_blood << endl;
}

int main() {
	c_person clee = c_person("AA", "aa", "bb", 25, 4.42);
	s_person slee;
	s_person clone;

	slee.age = 24;
	slee.grade = 3.0;
	slee.blood = new char[3];
	slee.f_blood = new char[3];
	slee.m_blood = new char[3];
	slee.blood = "AA";
	slee.f_blood = "AA";
	slee.m_blood = "AA";


	//class person�� ũ�⸦ ����Ͻÿ� 
	cout << "sizeof(lee) : " << sizeof(clee) << endl;
	cout << "sizeof(lee2) : " << sizeof(slee) << endl;


	//��� �� Ȯ�� �κ�. 
	clee.show();
	show(slee);
	copy(slee, clone);
	show(clone);

	return 0;
}