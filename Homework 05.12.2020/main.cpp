#include"Functions.h"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "�����: " << Sum(arr, n) << endl;
	cout << "������� ��������������: " << Avg(arr, n) << endl;
	cout << "����������� ��������: " << minValue(arr, n) << endl;
	cout << "������������ ��������: " << maxValue(arr, n) << endl;
	cout << "��������������� ������:\n";
	Sort(arr, n);
	Print(arr, n);
	cout << "\n-------------------------------------------" << endl;

	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "�����: " << Sum(brr, n) << endl;
	cout << "������� ��������������: " << Avg(brr, n) << endl;
	cout << "����������� ��������: " << minValue(brr, n) << endl;
	cout << "������������ ��������: " << maxValue(brr, n) << endl;
	cout << "��������������� ������:\n";
	Sort(brr, n);
	Print(brr, n);
	cout << "\n-------------------------------------------" << endl;

	char crr[n];
	FillRand(crr, n);
	Print(crr, n);
	cout << "�����: " << Sum(crr, n) << endl;
	cout << "������� ��������������: " << Avg(crr, n) << endl;
	cout << "����������� ��������: " << minValue(crr, n) << endl;
	cout << "������������ ��������: " << maxValue(crr, n) << endl;
	cout << "��������������� ������:\n";
	Sort(crr, n);
	Print(crr, n);
	cout << "\n-------------------------------------------" << endl;

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "�����: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "������� ��������������: " << Avg(arr2, ROWS, COLS) << endl;
	cout << "����������� ��������: " << minValue(arr2, ROWS, COLS) << endl;
	cout << "������������ ��������: " << maxValue(arr2, ROWS, COLS) << endl;
	cout << "��������������� ������:\n";
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "\n-------------------------------------------" << endl;

	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << "�����: " << Sum(brr2, ROWS, COLS) << endl;
	cout << "������� ��������������: " << Avg(brr2, ROWS, COLS) << endl;
	cout << "����������� ��������: " << minValue(brr2, ROWS, COLS) << endl;
	cout << "������������ ��������: " << maxValue(brr2, ROWS, COLS) << endl;
	cout << "\n-------------------------------------------" << endl;

	char crr2[ROWS][COLS];
	FillRand(crr2, ROWS, COLS);
	Print(crr2, ROWS, COLS);
	cout << "�����: " << Sum(crr2, ROWS, COLS) << endl;
	cout << "������� ��������������: " << Avg(crr2, ROWS, COLS) << endl;
	cout << "����������� ��������: " << minValue(crr2, ROWS, COLS) << endl;
	cout << "������������ ��������: " << maxValue(crr2, ROWS, COLS) << endl;
	cout << "\n-------------------------------------------" << endl;

}