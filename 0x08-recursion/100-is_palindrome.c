/**
 * _strlen_recursion - returns the lenght
 * @s: string to calculate the lenght
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @t: iterator
 * @leng: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int t, int leng)
{
	if (*(s + t) != *(s + leng - 1))
		return (0);
	if (t >= leng)
		return (1);
	return (check_pal(s, t + 1, leng - 1));
}
