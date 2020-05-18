#include "function.h"
#include "pch.h"
#include <iostream>;
#include <fstream>

using namespace std;

double sum_nech(double massive[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 1)
			sum += massive[i];
	}
	return sum;
}

double kol(double massive[], int n)
{
	double kol = 0;
	for (int i = 0; i < n; i++) {
		if (massive[i] > 0)
			kol += 1;
	}
	return kol;
}

double last0(double massive[], int n)
{
	double sum = 0;
	double last0;
	for (int i = n - 1; i >= 0; i--) {
		if (massive[i] == 0) {
			last0 = i;
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if (i > last0)
			sum += massive[i];
	}
	return sum;
}

double first_last_otr(double massive[], int n)
{	
	double first, last;
	double sum = 0;
	for (int i = 0; i < n; i++) {
		if (massive[i] < 0) {
			first = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (massive[i] < 0) {
			last = i;
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if ((i > first) && (i < last)) 
			sum += massive[i];
	}
	return sum;
	
}

void sort(double massive[], int n)
{
	double temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (massive[j] > massive[j + 1]) {
				// меняем элементы местами
				temp = massive[j];
				massive[j] = massive[j + 1];
				massive[j + 1] = temp;
			}
		}
	}
}

void sout(double massive[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << massive[i] << " ";
	}
}

void out_file(double massive[], int n, ofstream out)
{
	for (int i = 0; i < n; i++) {
		out << massive[i] << " ";
	}
}

void rand_massive(double massive[], int n, int min, int max)
{
	for (int i = 0; i < n; i++) {
		massive[i] = rand() % max + min;
	}
}

