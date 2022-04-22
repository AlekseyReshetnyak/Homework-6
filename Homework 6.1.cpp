#include "Function.h"

int main()
{
	int size = 20;
	int* arr = new int[size];
	fill(arr, size);
	out(arr, size);
	selection_sort(arr, size);
	out(arr, size);
}