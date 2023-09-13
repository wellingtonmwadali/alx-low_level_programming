#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  * of integers using jump search.
  * @array: pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is absent or Null array -1.
  *         Success first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t n, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (n = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		n = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", n, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; n < jump && array[n] < value; n++)
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
	printf("Value checked array[%ld] = [%d]\n", n, array[n]);

	return (array[n] == value ? (int)n : -1);
}
