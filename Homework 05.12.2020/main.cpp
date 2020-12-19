#include<iostream>
using namespace std;

const int ROWS = 5;
const int COLS = 5;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int n, const int m);
void FillRand(double arr[ROWS][COLS], const int n, const int m);
void FillRand(char arr[ROWS][COLS], const int n, const int m);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int n, const int m);
void Print(char arr[ROWS][COLS], const int n, const int m);
void Print(double arr[ROWS][COLS], const int n, const int m);
void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);
void Sort(int arr[ROWS][COLS], const int m, const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);
int Sum(int arr[ROWS][COLS], const int n, const int m);
double Avg(int arr[ROWS][COLS], const int n, const int m);
double Sum(double arr[ROWS][COLS], const int n, const int m);
double Avg(double arr[ROWS][COLS], const int n, const int m);
char Sum(char arr[ROWS][COLS], const int n, const int m);
double Avg(char arr[ROWS][COLS], const int n, const int m);

int minValue(int arr[], const int n);
int maxValue(int arr[], const int n);
double minValue(double arr[], const int n);
double maxValue(double arr[], const int n);
char minValue(char arr[], const int n);
char maxValue(char arr[], const int n);
int minValue(int arr[ROWS][COLS], const int n, const int m);
int maxValue(int arr[ROWS][COLS], const int n, const int m);
double minValue(double arr[ROWS][COLS], const int n, const int m);
double maxValue(double arr[ROWS][COLS], const int n, const int m);
char minValue(char arr[ROWS][COLS], const int n, const int m);
char maxValue(char arr[ROWS][COLS], const int n, const int m);

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
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 50;
	}
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int m, const int n)
{
	int iterations = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = i; k < m; k++)
			{
				int l;
				if (k == i) l = j + 1;
				else l = 0;
				for (; l < n; l++)
				/*for (int l = k == i ? j + 1 : 0; l < n; l++)*/
				{

					if (arr[i][j] < arr[k][l])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	cout << "Количество итераций: " << iterations << endl;
}
int Sum(int arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int minValue(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
int maxValue(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5000;
		arr[i] /= 100;
	}
}
double Sum(double arr[], const int n)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double minValue(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
double maxValue(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}

}
char Sum(char arr[], const int n)
{
	char Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
char minValue(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
char maxValue(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
void FillRand(int arr[ROWS][COLS], const int n, const int m)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 50;
		}
	}

}
int Sum(int arr[ROWS][COLS], const int n, const int m)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}
double Avg(int arr[ROWS][COLS], const int n, const int m)
{
	return (double)Sum(arr, ROWS, COLS) / n;
}
int minValue(int arr[ROWS][COLS], const int n, const int m)
{
	int min = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}
int maxValue(int arr[ROWS][COLS], const int n, const int m)
{
	int max = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}
void FillRand(double arr[ROWS][COLS], const int n, const int m)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 5000;
			arr[i][j] /= 100;
		}
	}

}
double Sum(double arr[ROWS][COLS], const int n, const int m)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}
double Avg(double arr[ROWS][COLS], const int n, const int m)
{
	return (double)Sum(arr, ROWS, COLS) / n;
}
double minValue(double arr[ROWS][COLS], const int n, const int m)
{
	double min = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}
double maxValue(double arr[ROWS][COLS], const int n, const int m)
{
	double max = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}
void FillRand(char arr[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand();
		}
	}

}
char Sum(char arr[ROWS][COLS], const int n, const int m)
{
	char Sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}
double Avg(char arr[ROWS][COLS], const int n, const int m)
{
	return (double)Sum(arr, ROWS, COLS) / n;
}
char minValue(char arr[ROWS][COLS], const int n, const int m)
{
	char min = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}
char maxValue(char arr[ROWS][COLS], const int n, const int m)
{
	char max = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(double arr[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(char arr[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}