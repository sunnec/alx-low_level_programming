#include "function_pointers.h"
/**
  * int_index - ...
  * @array: ...
  * @size: ...
  * @cmp: ...
  *
  * Return: ...
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ctr = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (ctr < size)
			{
				if (cmp(array[ctr]))
					return (ctr);

				ctr++;
			}
		}
	}

	return (-1);
}
