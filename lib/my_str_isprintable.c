int		my_str_isprintable(char *str)
{
	while (str[0])
	{
		if (str[0] >= 32 || str[0] != 127)
			return 0;
		str++;
	}
	return 1;
}
