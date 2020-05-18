

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include "pch.h"
#include "function.h"
#include <locale.h>

using namespace std;

const int n = 10;

int main()
{

	setlocale(LC_ALL, "Rus");
	ofstream out; // поток для записи
	string filename = "result.txt"; // Название файла
	out.open(filename);
	double massive[n];
	rand_massive(massive, n, -10, 30);
	cout << "Начальный массив : ";
	out << "Начальный массив : ";
	sout(massive, n);
	for (int i = 0; i < n; i++) {
		out << massive[i] << " ";
	}
	cout << endl;
	out << endl;
	cout << "Сумма элементов с нечетными номерами = " << sum_nech(massive, n) << endl;
	out << "Сумма элементов с нечетными номерами = " << sum_nech(massive, n) << endl;
	cout << "Сумма элементов массива, расположенных между первым и последним отрицательными элементами = " << first_last_otr(massive, n) << endl;
	out << "Сумма элементов массива, расположенных между первым и последним отрицательными элементами = " << first_last_otr(massive, n) << endl;
	cout << endl;
	out << endl;
	cout << "Кол-во положительных элементов : " << kol(massive, n) << endl;
	out << "Кол-во положительных элементов : " << kol(massive, n) << endl;
	cout << "Сумма элементов массива, расположенных после последнего элемента, равного нулю : " << last0(massive, n) << endl;
	out << "Сумма элементов массива, расположенных после последнего элемента, равного нулю : " << last0(massive, n) << endl;
	sort(massive, n);
	cout << "Отсортированный массив ";
	out << "Отсортированный массив ";
	for (int i = 0; i < n; i++) {
		out << massive[i] << " ";
	}
	sout(massive, n);
	out.close();
	system("pause");
}


