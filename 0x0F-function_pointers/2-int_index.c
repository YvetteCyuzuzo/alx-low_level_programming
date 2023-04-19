#include "function_pointers.h"

/**
  * int_index - ...
  * @array: array to be printed
  * @size: ...
  * @cmp: pointer that is going to be used to com
  * 
  * Return: ...
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}

