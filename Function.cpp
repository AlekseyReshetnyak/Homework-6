#include "Function.h"

void fill(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 51;
}

void fill(double arr[], int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 51 + (rand() % 20) * 0.01;
}

void bubble_sort(int arr[], int size)
{
	int k = 1;
	while (k > 0) {
		k = 0;
		int help;
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				help = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = help;
				k += 1;
			}
		}
	}
}

void bubble_sort(double arr[], int size)
{
	int k = 1;
	while (k > 0) {
		k = 0;
		double help;
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				help = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = help;
				k += 1;
			}
		}
	}
}

void selection_sort(int arr[], int size)
{
	int help;
	static int max = 0;
	static int max_position = 0;
	for (int i = 0; i < size - 1; i++) {
		int j;
		max = 0;
		max_position = 0;
		for (j = 0; j < size - i; j++) {
			if (arr[j] > max) {
				max = arr[j];
				max_position = j;
			}
		}
		arr[max_position] = arr[j - 1];
		arr[j - 1] = max;
	}
}

void selection_sort(double arr[], int size)
{
	double help;
	static int max = 0;
	static int max_position = 0;
	for (int i = 0; i < size - 1; i++) {
		int j;
		max = 0;
		max_position = 0;
		for (j = 0; j < size - i; j++) {
			if (arr[j] > max) {
				max = arr[j];
				max_position = j;
			}
		}
		arr[max_position] = arr[j - 1];
		arr[j - 1] = max;
	}
}

void insertion_sort(int arr[], int size)
{
	int help;
	for (int i = 0; i < size - 1; i++) {
		int j = i;
		while (j >= 0) {
			if (arr[j] > arr[j + 1]) {
				help = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = help;
				j -= 1;
			}
			else
				j = -1;
		}
	}
}

void insertion_sort(double arr[], int size)
{
	double help;
	for (int i = 0; i < size - 1; i++) {
		int j = i;
		while (j >= 0) {
			if (arr[j] > arr[j + 1]) {
				help = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = help;
				j -= 1;
			}
			else
				j = -1;
		}
	}
}

void out(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << "\n";
}

void out(double arr[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << "\n";
}

