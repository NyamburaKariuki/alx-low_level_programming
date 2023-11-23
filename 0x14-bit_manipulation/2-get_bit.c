/**
  *get_bit - get bit at index
  *@index: index of the bit
  *@n: integer
  *Return: Always 0 (Success)
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_index;

	if (index > 63)
		return (-1);
	value_index = (n >> index) & 1;
	return (value_index);
}
