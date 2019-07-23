/*
	�Ʒ��� �ڵ�� 2���� �迭 mat[row][col]�� ���� �Ҵ�޾Ƽ� �ʱ�ȭ �ϴ� ���̴�.
*/
#include <iostream>
int main()
{
	int col, row;
	std::cin >> row >> col;

	// 1. 2���� �迭�� �����Ҵ� �ϼ��� (for�� ���)
	int** mat;
	mat = new int *[row];
	for (int i = 0; i < row; i++) {
		mat[i] = new int[col];
	}

	// 2���� �迭�� �ʱ�ȭ�ϰ� ���
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			mat[i][j] = i * col + j;
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << mat[i][j] << " ";
		}
		std::cout << std::endl;
	}

	// 2. �����Ҵ� ���� 2���� �迭�� �����ϼ��� (for�� ���)
	for (int i = 0; i < row; i++) {
		delete[] mat[i];
	}
	delete[] mat;
}