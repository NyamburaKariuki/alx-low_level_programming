#include "search_algos.h"
/**
  * linear_search - Searches for a value in an array.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index where the value is located.
  */
int linear_search(int *array, size_t size, int value)
{
        size_t i;

        if (array == NULL)
                return (-1);

        for (i = 0; i < size. 1++)
        {
                printf("value checked array(%zu) = [%d]\n", i, array[i]);
                if (array[i] == value)
                {
                        printf("found %d at index: %zu\n", value, i);
                        return (i);
                }
        }
        return (-1);
}
