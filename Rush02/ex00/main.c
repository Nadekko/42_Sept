#include <unistd.h>
#include <fcntf.h>

int	main(int ac, char **av)
{
	int	fd;

	fd = open("./numbers.dict", O_RDWR)
	if (fd == NULL)
		ft_putstr("CAN'T OPEN DICT\n");
	if (ac < 2 || ac > 3)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (ac == 2)
	{
		if (ft_atoi(av[1]) < 0)
		{
			ft_putstr("Error\n");
			return (1);
		}
		//call fonction dict and print array
	}
	if (ac == 3)
	{
		if (ac == 1)
		{
			if (ft_atoi(av[1]) < 0)
			{
				ft_putstr("Error\n");
				return (1);
			}
			else
			{
				//fputs = (av[1], fd); (print array in dict)

		}
		if (ac == 2)
		{
			//ajout de la valeur de nbr)
		}
	}
	close (fd);
	return (0);
}


