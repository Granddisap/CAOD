

#include "pch.h"
#include "function.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	string filename = "result.txt";
	ofstream out;
	out.open(filename);
	int n, m;
	cout << "Введите n : ";
	cin >> n;
	cout << "Введите m : ";
	cin >> m;
	out << "Матрица размера " << n << "x" << m << endl;
	int **massive = createArray(n, m);
	cout << "Вывод начального массива" << endl;
	out << "Вывод начального массива" << endl;
	randomArray(massive, n, m, -10, 50);
	toString(massive, n, m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			out << massive[i][j] << " ";
		}
		out << endl;
	}
	cout << "Произведение элементов в тех строках, которые не содержат отрицательных элементов : " << prNotOtr(massive, n, m) << endl;
	out << "Произведение элементов в тех строках, которые не содержат отрицательных элементов : " << prNotOtr(massive, n, m) << endl;
	cout << "Максимум среди сумм элементов диагоналей, параллельных главной диагонали матрицы : " << maxDiagonal(massive, n, m); 
	out << "Максимум среди сумм элементов диагоналей, параллельных главной диагонали матрицы : " << maxDiagonal(massive, n, m);
	deleteArray(massive, n);
}
