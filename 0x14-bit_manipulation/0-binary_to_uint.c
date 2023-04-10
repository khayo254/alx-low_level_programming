/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 *
 * Return: result (unsigned int)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)

	return (0);

	while (b[i] != '0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;
			if (b[i] == '1')
				result = result | 1;
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
