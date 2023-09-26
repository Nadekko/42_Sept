/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:20:26 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/15 11:47:47 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rot_13(char c)
{
	if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
		c += 13;
	else if ((c >= 'n' && c <= 'z') || (c >='N' && c <= 'Z'))
		c -= 13;
	return (c);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{	while (*argv[1])
			ft_putchar(rot_13(*argv[1]++));
	}
	ft_putchar('\n');
	return (0);
}

/*int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'm')
				|| (argv[1][i] >= 'A' &&argv[1][i] <= 'M'))
				ft_putchar(argv[1][i] += 13);
			else if ((argv[1][i] >= 'n' && argv[1][i] <= 'z')
				|| (argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
				ft_putchar(argv[1][i] -= 13);
			else
				ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}*/
