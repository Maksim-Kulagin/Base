#include<iostream>
using namespace std;
#define SQUARE
#define Triangle_1
#define Triangle_2
#define Triangle_3
#define Triangle_4
#define Rombus
#define Pros and Cons
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE
#ifdef Triangle_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // Triangle
#ifdef Triangle_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // Triangle_2
#ifdef Triangle_3
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < i; k++)
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // Triangle_3
#ifdef Triangle_4
	for (int i = 0; i < n; i++)
	{
		for (int k = i; k < n; k++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // Triangle_4
#ifdef Rombus
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}
		cout << "/";
		for (int j = 0; j < i * 2; j++)
		{
			cout << " ";
		}
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		cout << "\\";
		for (int j = i; j < n - 1; j++)
		{
			cout << "  ";
		}
		cout << "/";
		cout << endl;
	}
#endif // Rombus
#ifdef Pros and Cons
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0)
				cout << "+ ";
			else
				cout << "- ";
		}
		cout << endl;
	}
#endif // Pros and Cons
}