#pragma once

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int** createArray(int n, int m);
void toString(int **massive, int n, int m);
void randomArray(int **massive, int n, int m, int min, int max);
int prNotOtr(int **massive, int n, int m);
void deleteArray(int **massive, int n);
int maxDiagonal(int **massive, int n, int m);
