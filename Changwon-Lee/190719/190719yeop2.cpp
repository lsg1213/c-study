/*
�����ð��� ������� MyString class�� upgrade�غ���.
#1 �̹����� insert�Լ��� ����� ����.
a = "string"
a.insert(2,"<wow>"); // insert�� ������ MyString& ���� ������, ���� �����ڿ� ���ؼ� char* �� �������൵ �� �۵��� �ȴ�. 
�� �����ϸ� index�� �� ���� wow�� ���Եȴ�.
���� ���� : st<wow>ring

#2 strcmp�� ������ ����.
�ΰ��� ��Ʈ���� �����ϸ� 0 ��ȯ
���� ���ڰ� ������ 1 ��ȯ
�ڿ� ��Ʈ���� ������ -1�� ��ȯ�Ѵ�.
*/


#include<iostream>


using namespace std;

int strlen(const char *str) {
	int len = 0;
	while(str[len] != '\0'){
		len++;
	}
	return len;
}

class MyString{
private: 
	char *string_con;
	int string_len;

public:
	MyString() : string_len(0),string_con(0) { }
	MyString(char c){
		string_len = 1;
		string_con = new char[0];
		string_con[0] = c;
	}
	MyString(const char *str){
		string_len = strlen(str);
		string_con = new char[string_len+1];
		
		for(int i = 0; i <= string_len; i++){
			string_con[i] = str[i];
		}
	}
	MyString(const MyString &myString) {
		string_len = myString.string_len;
		string_con = new char[string_len + 1];
  
          for (int i = 0; i < string_len + 1; i++) {
              string_con[i] = myString.string_con[i];
          }
      }

	MyString& operator+(const MyString &str){
		MyString *result = new MyString();		
		
		result->string_len = str.string_len + string_len;
		result->string_con = new char[result->string_len + 1];
		
		int i = 0;
		int j = 0;

		for(i = 0; i < string_len; i++)
			result->string_con[i+j] = string_con[i];

		for(j = 0; j < str.string_len; j++)
			result->string_con[i+j] = str.string_con[j];

		result->string_con[i+j] = '\0';
		
		cout <<"result " << result->string_con << endl;
		return *result;
	}
	 
	MyString& operator* (const int num) {

        MyString *result = new MyString();

        result->string_len = num *string_len;
        result->string_con = new char[result->string_len + 1];

        for(int i = 0; i < num; i++){
            for(int j = 0; j < string_len; j++){
                result->string_con[string_len*i+j] = string_con[j];
            }
        }
        result->string_con[num*string_len] = '\0';
        return *result;

    }
	MyString& insert(const int loc, const MyString& str);	

	char at(const int n) const{
		if(string_len <= n || n < 0)
			return -1;
		else 
			return string_con[n];
	}

	int strcmp(const MyString &str1, const MyString &str2){
		// strcmp ���� 	
		int iter = (str1.string_len > str2.string_len)? str1.string_len : str2.string_len;
		int i = 0;
		while(i <= iter){
			if(str1.string_con[i] < str2.string_con[2]){
				return 1;
			}
			if(str1.string_con[i] > str2.string_con[2]){
				return -1;
			}
		}
		return 0;
	}
	
	// ���ڰ� ������ �� ��ġ ��ȯ, ������ -1��ȯ
	int find(const char *str, int pos = 0){
		
		int len = strlen(str);
		int j = 0;
		int flag = false;
		while(string_con[pos] != '\0'){
			
			for(int k =0; k < len; k++){
				if(string_con[pos+k] != str[k])
					break;
				if(k==len){}
			}
		
			pos++;
			j++;
		}
	return 0;	
	}

	int length() const { return string_len; }
	void print() const { cout << string_con << endl; } 
	char* GetString() const { return string_con; }	
	
	~MyString(){ delete[] string_con; }
	


};

MyString& MyString::insert(const int loc, const MyString& str){
	
	char* tmp;
	tmp = new char[string_len + 1];
	for(int i = 0; i <=string_len; i++){
		tmp[i] = string_con[i];
	}
	string_len += str.string_len;
	delete[] string_con;
	string_con = new char[string_len + 1];
	for(int i = 0; i < loc; i++){
		string_con[i] = tmp[i];
	}
	for(int i = loc; i < loc+str.string_len; i++){
		string_con[i] = str.string_con[i - loc];
	}
	for(int i = loc+str.string_len; i < string_len + 1; i++){
		string_con[i] = tmp[i - str.string_len];
	}
	
	// your code 

}

ostream& operator<< (ostream &os, const MyString &str){
		cout << str.GetString();
		return os;
}

int main(){
	MyString a("yeop");
	a.print();
	MyString b("seong");
	b.print();
	
	a.insert(2,"s");
	a.print();
	
	cout << a.strcmp(a,b) << endl;
	
}
