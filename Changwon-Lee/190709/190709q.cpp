#include<iostream>

using namespace std;

class chin{
private:
   char c;
   int i;

public:
   //c = 'a'�� i = 15�� �ʱ�ȭ ���ִ� �����ڸ� �ۼ��Ͻÿ�. 
   chin() : c = 'a', i = 15{}
   void show(){
      cout << "c : " << c << endl;
      cout << "i : " << i << endl;
   }
};
 

int main(){
   chin a;
   
   //class chin a�� ũ�⸦ ����Ͻÿ� 
   cout << "sizeof(a) : " << sizeof(a) << endl;
   
   a.show();
   
   
   //���������ڸ� ������� ���� �����͸� ���Ͽ� 
   //a�� ����� ���� c = 'b'�� i = 20���� �ٲپ�� 

   
   //�ؼ��� ���� ��
   
   printf("%d\n", p);
   printf("%d\n", p+4);
   
   //
   a.show();
}