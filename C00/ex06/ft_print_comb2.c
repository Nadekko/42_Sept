/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:23:58 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/06 18:32:29 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_n(char n)
{
	char	c;

	if (n < 10)
	{
		c = n + 48;
		ft_putchar('0');
		ft_putchar(c);
	}
	else
	{
		c = (n / 10) + 48;
		ft_putchar(c);
		c = (n % 10) + 48;
		ft_putchar(c);
	}
}

void	ft_print_comb2(void)
{
	int	v[2];

	v[0] = 0;
	while (v[0] < 99)
	{
		v[1] = v[0] + 1;
		while (v[1] < 100)
		{
			write_n(v[0]);
			ft_putchar(' ');
			write_n(v[1]);
			if (!(v[0] == 98 && v[1] == 99))
				write(1, ", ", 2);
			v[1]++;
		}
		v[0]++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
