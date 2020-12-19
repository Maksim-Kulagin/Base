#pragma once
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