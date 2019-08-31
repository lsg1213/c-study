#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� �־��� input.txt�� Ȯ���Ͽ�, output.txt������ ���빰�� ��ȣȭ ������ �� �ֵ��� �Ͽ���.
//������ ��ȣȭ ���������� ������ ��Ʈ�����ڸ��� ���Ǿ���.
//hint! , ���� printf %d�� ascii code�� ���ؼ� � ��Ʈ�����ڰ� ���Ǿ����� �����ϰ� �� �� �ִ�.
//����ϰ� ���� ����س��� ���ؼ� ó���ؾ��� ������ �������� Ȯ���϶�.
//�������� �䱸������ ������ ����. 
//���� �־��� input.txt�� Ȯ���Ͽ�, output.txt������ ���빰�� ��ȣȭ ������ �� �ֵ��� �Ͽ���.

int main(void) {
	FILE* in, * out;
	unsigned char n;

	in = fopen("input.txt", "r");
	out = fopen("output.txt", "a+");

	while (fscanf(in,"%c", &n)!=EOF) {
		/**/
		n = ~n;
		fprintf(out, "%d\n", n);
	}

	fclose(in);
	fclose(out);

	return 0;
}