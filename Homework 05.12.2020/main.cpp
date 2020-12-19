#include"Functions.h"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение: " << minValue(arr, n) << endl;
	cout << "Максимальное значение: " << maxValue(arr, n) << endl;
	cout << "Отсортированный массив:\n";
	Sort(arr, n);
	Print(arr, n);
	cout << "\n-------------------------------------------" << endl;

	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "Сумма: " << Sum(brr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(brr, n) << endl;
	cout << "Минимальное значение: " << minValue(brr, n) << endl;
	cout << "Максимальное значение: " << maxValue(brr, n) << endl;
	cout << "Отсортированный массив:\n";
	Sort(brr, n);
	Print(brr, n);
	cout << "\n-------------------------------------------" << endl;

	char crr[n];
	FillRand(crr, n);
	Print(crr, n);
	cout << "Сумма: " << Sum(crr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(crr, n) << endl;
	cout << "Минимальное значение: " << minValue(crr, n) << endl;
	cout << "Максимальное значение: " << maxValue(crr, n) << endl;
	cout << "Отсортированный массив:\n";
	Sort(crr, n);
	Print(crr, n);
	cout << "\n-------------------------------------------" << endl;

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "Сумма: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое: " << Avg(arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValue(arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValue(arr2, ROWS, COLS) << endl;
	cout << "Отсортированный массив:\n";
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "\n-------------------------------------------" << endl;

	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << "Сумма: " << Sum(brr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое: " << Avg(brr2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValue(brr2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValue(brr2, ROWS, COLS) << endl;
	cout << "\n-------------------------------------------" << endl;

	char crr2[ROWS][COLS];
	FillRand(crr2, ROWS, COLS);
	Print(crr2, ROWS, COLS);
	cout << "Сумма: " << Sum(crr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое: " << Avg(crr2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValue(crr2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValue(crr2, ROWS, COLS) << endl;
	cout << "\n-------------------------------------------" << endl;

}