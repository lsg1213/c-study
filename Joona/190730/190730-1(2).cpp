#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//������ ��ȣȭ ���������� ������ ��Ʈ�����ڸ��� ���Ǿ���.
//hint! , ���� printf %d�� ascii code�� ���ؼ� � ��Ʈ�����ڰ� ���Ǿ����� �����ϰ� �� �� �ִ�.
//����ϰ� ���� ����س��� ���ؼ� ó���ؾ��� ������ �������� Ȯ���϶�.
//�������� �䱸������ ������ ����. 
//���� �־��� output.txt�� Ȯ���Ͽ�, output1.txt������ ���빰�� �ؼ� ��  �� �ֵ��� �Ͽ���.

int main(void) {
	FILE* in, * out;
	unsigned char n;

	in = fopen("output.txt", "r");
	out = fopen("output1.txt", "a+");

	while (fscanf(in, "%hhu",&n)!=EOF) {
		n = ~n;
		fprintf(out, "%c", n);
	}

	fclose(in);
	fclose(out);

	return 0;
}