/**
 * _strlen - returns str length
 * @s: str to count
 * Return: str length
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen(s + 1) + 1);
}
