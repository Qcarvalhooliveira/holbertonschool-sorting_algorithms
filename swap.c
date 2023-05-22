#include "sort.h"

/**
 * swap - Swaps two elements in an array.
 * @i:The first element.
 * @j: The second element.
 * Return: nothing.
 */
void swap(int *array, int i, int j)
{
	int temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
