#include"pch.h"
#include "function.h"

int** createArray(int n, int m)
{
	int **massive;
	massive = new int *[n];
	for (int i = 0; i < n; i++) {
		massive[i] = new int[m];
	}
	return massive;
}

void toString(int **massive, int n, int m)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << massive[i][j]  << " ";
		}
		cout << endl;
	}
}

void randomArray(int **massive, int n, int m, int min, int max)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			massive[i][j] = rand() % max + min;
		}
	}
}

int prNotOtr(int ** massive, int n, int m)
{
	bool minus;
	int proizv = 1;
	for (int i = 0; i < n; i++)
	{
		minus = false;
		for (int j = 0; j < m; j++)
			if (massive[i][j] < 0)
			{
				minus = true;
				break;
			}
		if (minus)
			continue;
		for (int j = 0; j < m; j++)
			proizv *= massive[i][j];
	}
	return proizv;
}

void deleteArray(int ** massive, int n)
{
	for (int i = 0; i < n; i++)
		delete[] massive[i];
	delete[] massive;
}


int maxDiagonal(int ** massive, int n, int m)
{
	int sum, max_sum;
	for (int k = 1; k < n - 1; k++)
	{
		sum = 0;
		for (int i = 0, j = k; j < n; i++, j++)
			sum += massive[i][j];
		if ((k == 1) || (sum > max_sum))
			max_sum = sum;

		sum = 0;
		for (int i = k, j = 0; i < n; i++, j++)
			sum += massive[i][j];
		if (sum > max_sum)
			max_sum = sum;
	}
	return max_sum;
}
