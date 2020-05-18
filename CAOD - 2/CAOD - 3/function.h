#pragma once


#include <iostream>
#include <string>
#include <fstream>
#include "pch.h"

using namespace std;


double sum_nech(double massive[], int n);
double first_last_otr(double massive[], int n);
void sort(double massive[], int n);
void sout(double massive[], int n);
void out_file(double massive[], int n, ofstream out);
void rand_massive(double massive[], int n, int min, int max);
double kol(double massive[], int n);
double last0(double massive[], int n);