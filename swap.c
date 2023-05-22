#include "sort.h"

/**
 * swap - Swaps two elements in an array.
 * @i:The first element.
 * @j: The second element.
 * Return: nothing.
 */
void swap(int *i, int *j)
{
  int temp = *i;
  *i = *j;
  *j = temp;
}
