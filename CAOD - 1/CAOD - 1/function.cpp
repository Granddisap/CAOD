#include "pch.h"
#include "function.h"
#include <iomanip> // setprecision

void function(double a, double b, double c, double xBegin, double xEnd, double dX) {
	ofstream out;          // ����� ��� ������
	out.open("result.txt"); // �������� ���� ��� ������
	int aC, bC, cC;
	double result;
	aC = a;
	bC = b;
	cC = c;
	if (out.is_open()) {
		out << "������� �1" << endl;
		out << "a = " << a << endl;
		out << "b = " << b << endl;
		out << "c = " << c << endl;
		out << "X ��������� = " << xBegin << endl;
		out << "X �������� = " << xEnd << endl;
		out << "Dx ��� = " << dX << endl;
		out << "��������� : " << endl;
		for (double x = xBegin; x <= xEnd; x += dX) {
			if (c < 0 && x != 0) {
				result = - a * x - c;
			}
			else
				if (c > 0 && x == 0) {
					result = (x - a) / (- c);
				}
				else {
					result = (b * x) / (c - a);
				}
			if (((aC || bC) && (aC || cC)) != 0) {
				out << setprecision(3);
				out << x << " | " << result << endl;
				cout << setprecision(3);
				cout << x << " | " << result << endl;
			}
			else {
				out << setprecision(3);
				out << x << " | " << int(result) << endl;
				cout << setprecision(3);
				cout << x << " | " << int(result) << endl;
			}
		}
	}
}

void function_f(double a, double b, double c, double xBegin, double xEnd, double dX) {
	ofstream out;          // ����� ��� ������
	out.open("result.txt"); // �������� ���� ��� ������
	int aC, bC, cC;
	double result;
	aC = a;
	bC = b;
	cC = c;
	for (double x = xBegin; x <= xEnd; x += dX) {
		if ((x + 10) <0 && b != 0) {
			result = a * x * x - c * x + b;
		}
		else
			if ((x + 10) > 0 && b == 0) {
				result = (x - a) / (x - c);
			}
			else {
				result = -x / (a - c);
			}
		if (((aC || bC) && (aC || cC)) != 0) {
			cout << setprecision(3);
			cout << x << " | " << result << endl;
		}
		else {
			cout << setprecision(3);
			cout << x << " | " << int(result) << endl;
		}
	}
}
