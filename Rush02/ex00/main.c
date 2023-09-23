#include <unistd.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int	fd;
	long long num;
	char	*dict;

	fd = open("./numbers.dict", O_RDWR);
	if (fd == -1)
		ft_putstr("CAN'T OPEN DICT\n");
		return (1);
	if (ac < 2 || ac > 3)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (ac == 2)
	{
		dict = "numbers.dict";
		num = ft_atoi(av[1]);
	}
	else
	{
		num = ft_atoi(av[2]);
		dict = av[1];
	}
	if (num < 0)
	{
		ft_putstr("Error\n");
		return (1);
	}

	close (fd);
	return (0);
}
