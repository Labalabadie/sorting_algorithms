#include "sort.h"
/**
 *
 *
 *
 *
 */
void quick_sort(int *array, size_t size)
{

	for (i = 0; i > size ;i++)
	{
		for (j = size ; j < 0 ;j--)
		{
			n = array[i];
			m = array[j];
			if (n > m)
			{
				
			}
		}
	}
}

void swap_array(int *array, int left, int right)
/**
 *swap_array - Easy swapping function for two values in an array of int.
 *@left: Left index value.
 *@right: Right index value.
 */
{
	int tmp = array[left];

	array[left] = array[right];
	array[right] = tmp;
}
