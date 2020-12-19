#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	/*for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			unique = true;
			arr[i] = rand() % 10;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
				}
			}
		} while (!unique);
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;*/
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int buffer = 0;
	int a;
	int b;
	int c;
	for (int i = 0; i < n - 1; i++)
	{
		for (int k = i + 1; k < n; k++)
		{
			if (arr[i] == arr[k])
			{
				buffer =  buffer + 1;
			}
		}
	}cout << buffer;
}