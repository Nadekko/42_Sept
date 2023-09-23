int	*ft_getnbr(int fd)
{
	int	i;
	char	c[1];
	char	*str;
	int	result;

	i = 0;
	str = malloc(sizeof(char) * 128);
	if (!str)
		return (NULL)
	read(fd, c, 1);
	// ignorer les caracteres qui ne sont pas des chiffres
	while (c[0] < '0' || c[0] > '9')
		read(fd, c, 1);
	// lire et stocker les chiffres dans le chaine 'str'
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	result = atoi(str);
	return (str);
}

char	*ft_gatvalue(int fd, char *c)
{
	int	i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * 128);
	if (!str)
		return (NULL)
	// lecture des carateres jusqu'a '\n'
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}
