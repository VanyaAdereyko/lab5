// laba 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double **a, *b;

	int i, m, n, j;

	bool metamf;

	cout << "Vvedite N ";

	cin >> n;

	cout << "Vvedite M ";

	cin >> m;

	cout << "Vvedite matricy\n";

	a = new double*[n];

	b = new double[m];

	for (i = 0; i < n; i++) a[i] = new double[m];

	for (i = 0; i < n; i++)

		for (j = 0; j < m; j++) cin >> a[i][j];

	for (i = 0; i < m; i++)

	{

		metamf = true;

		for (j = 0; j < n; j++) if (!(a[j][i] == 0)) metamf = false;

		if (metamf) b[i] = 0; else b[i] = 1;

	}

	cout << "Massiv b:\n";

	for (i = 0; i < m; i++) cout << b[i], cout << " ";

	cout << endl;
}

