#include <stdio.h>

//������ ��ȣȭ ���������� ������ ��Ʈ�����ڸ��� ���Ǿ���.
//hint! , ���� printf %d�� ascii code�� ���ؼ� � ��Ʈ�����ڰ� ���Ǿ����� �����ϰ� �� �� �ִ�.
//����ϰ� ���� ����س��� ���ؼ� ó���ؾ��� ������ �������� Ȯ���϶�.
//�������� �䱸������ ������ ����. 
//���� �־��� output.txt�� Ȯ���Ͽ�, output1.txt������ ���빰�� �ؼ� ��  �� �ֵ��� �Ͽ���.

int main(void){ 
	FILE *in, *out; 
	int n;
	
	in = fopen("output.txt", "r"); 
	out = fopen("output1.txt", "a+");
	
	while(/**/){
		/**/
	} 
	
	fclose(in);
	fclose(out);
	
	return 0;
}
