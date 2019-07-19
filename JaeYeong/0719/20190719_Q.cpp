// Deep copy�� Shallow copy�� ��°� ���� Ȯ���ϱ�
// Deep�� Shallow �� ���� ��츦 �ϼ��ϱ�

#include <iostream>
#include <cstring>
using namespace std;

class Member
{
public:
    int age;
    char* name;

public:
    Member(int _age, char* _name) //Constructor
    {
        age = _age;
        name = new char [strlen(_name)+1];
        strcpy(name, _name);
    }
/*
    Member(const Member& s) : Deep Copy
    {
        age =
        name =
        strcpy();
    }

    Member(const Member& s) : Shallow Copy
    {
        age =
        name =
    }
*/
    ~Member() {delete name;}

    void printMember()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
    }
};

int main()
{
    Member Q(23, "Mr.ABc");
    Member W = Q;

    Q.age = 24;
    strcpy(Q.name, "Mr.QWc");

    Q.printMember();
    W.printMember();

    return 0;
}
